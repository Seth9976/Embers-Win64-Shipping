// 函数: sub_1422a6b20
// 地址: 0x1422a6b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = *(arg1 + 0x35)
int64_t result

if ((r9 & 2) != 0)
    result = zx.q(*(arg1 + 0x38))
    
    if ((result.b & 1) == 0 || (result.b & 2) != 0)
        if ((r9 & 0x10) == 0)
        label_1422a6b75:
            
            if ((r9 & 0x20) != 0)
                for (int64_t* i = *(arg1 + 0x70); i != &i[sx.q(*(arg1 + 0x78))]; i = &i[1])
                    if (*i == *(arg2 + 0x240))
                        goto label_1422a6b6e
            
            result.b = 1
            return result
        
        int64_t* rcx = *(arg1 + 0x70)
        void* rdx = &rcx[sx.q(*(arg1 + 0x78))]
        
        if (rcx != rdx)
            while (*rcx != *(arg2 + 0x240))
                rcx = &rcx[1]
                
                if (rcx == rdx)
                    goto label_1422a6b6e
            
            goto label_1422a6b75

label_1422a6b6e:
result.b = 0
return result
