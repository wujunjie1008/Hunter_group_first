void sort_word(struct str arr,struct str arr1,int len,int n)
{
		
	int i,j;
	for(i=0;i<len;i++)   //ͳ��ÿ�����ʳ��ֵĴ��� 
	{
		if(arr[i].flag==1&&arr[i].flag1==0)     //flag=1 �����ǵ��� flag1=0����δ������ 
		{
			arr[i].count++;
			for(j=i+1;j<len;j++)
			{
				if(arr[i].name==arr[j].name)
				{
					arr[i].count++;
					arr[j].flag1=1;
				}
			}
		    
		}
	}
	arr[9999].count=0;
	arr[9999].flag=1;
	
	
	int max=0,k=0;
	for(j=0;j<n;j++)
	{
		max=9999;
		for(i=0;i<len;i++)
		{
			if(arr[i].flag==1&&arr[i].flag1==0&&arr[i].flag2==0)
			{
				if(arr[i].count>arr[max].count)
				{
					max=i;
					
				}
				else if(arr[max].count==arr[i].count)
				{
					if(arr[max].name.compare(arr[i].name)>0)
					{
						max=i;
					}
				}
			}
		}
		arr1[k].name=arr[max].name;
		arr1[k].count=arr[max].count;
		arr[max].flag2=1;
		k++;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr1[i].name<<endl;
		cout<<arr1[i].count<<endl;
		cout<<endl;
	}
	
}