// 函数: sub_140a77ef0
// 地址: 0x140a77ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = 0
arg1[1] = 0
sub_140af2c50(data_143ddb400, /Script/UnrealEd.ProjectPackagingSettings", 
    LocalizationTargetsToChunk", arg1, &data_143de5830)
sub_140aaeb20()

if (data_143dba230 s<= 0)
    return arg1

int32_t r14 = arg1[1].d

if (r14 == 0)
    return arg1

int32_t r13 = 0
int64_t r12
r12.b = sub_1405a71a0(&data_143dba228, *arg1) == 0

do
    int64_t i_3 = sx.q(i)
    
    for (i += 1; i s< r14; i += 1)
        int32_t rcx_1
        rcx_1.b = sub_1405a71a0(&data_143dba228, (sx.q(i) << 4) + *arg1) == 0
        
        if (zx.d(r12.b) != rcx_1)
            break
    
    int32_t i_2 = i - i_3.d
    
    if (r12.b == 0)
        int64_t* rdi_2 = (i_3 << 4) + *arg1
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                int64_t rsi_2 = *rdi_2
                
                if (rsi_2 != 0)
                    int64_t* rcx_5 = data_143ddb3f0
                    
                    if (rcx_5 == 0)
                        sub_140a750a0()
                        rcx_5 = data_143ddb3f0
                    
                    (*(*rcx_5 + 0x30))(rcx_5, rsi_2)
                
                rdi_2 = &rdi_2[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        if (r13 != i_3.d)
            memmove((sx.q(r13) << 4) + *arg1, (i_3 << 4) + *arg1, i_2 << 4)
        
        r13 += i_2
    
    r12.b ^= 1
while (i s< r14)

arg1[1].d = r13
return arg1
