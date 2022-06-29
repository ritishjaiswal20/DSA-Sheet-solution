
        int i=0;
        int j=0;
        while(i<n )
        {
            if(a[i]<b[j])
            {
                i++;
            }
            else
            {   int x=a[i];
                a[i]=b[j];
                b[j]=x;
                sort(b,b+m);
            }
        }
        sort(b,b+m);
        if(k<=n)
        {
            return a[k-1];
        }
        k=k-n;
        return b[k-1];
