// 函数: sub_141c98160
// 地址: 0x141c98160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int64_t var_28 = 0
int64_t var_20 = 0
void* r9 = &rdi[sx.q(arg1[1].d) * 5]

if (rdi == r9)
label_141c981bf:
    rdi = nullptr
else
    while (*rdi != 0 || rdi[1] != 0 || rdi[2] != arg2)
        rdi = &rdi[5]
        
        if (rdi == r9)
            goto label_141c981bf

int64_t* i = *arg3
int64_t result = sx.q(arg3[1].d)

for (void* rbp = &i[result * 3]; i != rbp; i = &i[3])
    if (*i != 0)
        if (rdi == 0)
            int64_t rdi_1 = sx.q(arg1[1].d)
            int32_t rax_1 = (rdi_1 + 1).d
            arg1[1].d = rax_1
            
            if (rax_1 s> *(arg1 + 0xc))
                sub_1405c4ec0(arg1)
            
            rdi = *arg1 + rdi_1 * 0x28
            
            if (rdi == 0)
                rdi = nullptr
            else
                rdi[2] = arg2
                int64_t var_20_1 = 0
                *rdi = 0.o
                rdi[3] = 0
                rdi[4] = 0
        
        result = sub_141c8ef70(&rdi[3], i)

return result
