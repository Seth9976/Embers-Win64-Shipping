// 函数: sub_141044cf0
// 地址: 0x141044cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = data_142d3f800

for (int64_t i = 0; i s< 6; i += 2)
    *(arg1 + (i << 3)) |= zmm2

memset(arg1 + 0xc30, 0, 0xc30)
int64_t i_2 = 6
uint64_t result = arg1 + 0x1878
int64_t rcx_1 = 6

if (arg1 + 0x1860 u> result)
    rcx_1 = 0

if (arg1 + 0x1860 u<= result)
    result = -1
    __builtin_memset(arg1 + 0x1860, 0xffffffff, rcx_1 << 2)

int64_t* rbx_1 = arg1 + 0x30
int64_t i_1

do
    int64_t j_1 = 0x40
    int64_t j
    
    do
        int64_t* rdi_1 = *rbx_1
        *rbx_1 = 0
        
        if (rdi_1 != 0)
            result = zx.q(rdi_1[1].d)
            rdi_1[1].d -= 1
            
            if (result.d == 1)
                char rax
                
                if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax = sub_1405949a0()
                
                if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax != 0))
                    result = (**rdi_1)(rdi_1, 1)
                else
                    result = 0
                    bool z_1
                    
                    if (0 == *(rdi_1 + 0xc))
                        *(rdi_1 + 0xc) = 1
                        z_1 = true
                    else
                        result = zx.q(*(rdi_1 + 0xc))
                        z_1 = false
                    
                    if (z_1)
                        result = sub_1405dcc10(&data_143f02390, rdi_1)
        
        rbx_1 = &rbx_1[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
