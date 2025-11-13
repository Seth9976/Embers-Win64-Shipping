// 函数: sub_142666930
// 地址: 0x142666930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0xffffffff
int64_t var_38 = 0
int32_t i_2 = 0
void* result = sub_140d3cc80(sub_14269bba0(), &var_38, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_28 + 1
int64_t rdx_1 = var_38
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(rdx_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    void* rbx_1 = *(rdx_1 + (sx.q(i_1) << 3))
    result = sub_1409740e0(rbx_1 + 0x3c0, arg1)
    
    if (result.d s> 0)
        int64_t rsi_1 = 0
        int64_t* rdi_1 = *(rbx_1 + 0x90)
        result = &rdi_1[sx.q(*(rbx_1 + 0x98))]
        uint64_t r14_2 = sx.q(*(rbx_1 + 0x98)) << 3 u>> 3
        
        if (rdi_1 u> result)
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t* rbx_2 = *rdi_1
                
                if (rbx_2 != 0 && (*(rbx_2 + 0x5c) & 8) == 0)
                    int32_t rax_3 = *(rbx_2 + 0xc)
                    void* const rax_7
                    
                    if (rax_3 s>= data_143e1d9b4)
                        rax_7 = nullptr
                    else
                        uint32_t rdx_3 = zx.d(rax_3.w)
                        
                        if (rax_3 s< 0)
                            rax_3 += 0xffff
                            rdx_3 -= 0x10000
                        
                        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
                    
                    result = zx.q(*(rax_7 + 8) u>> 0x1d)
                    
                    if ((result.b & 1) == 0)
                        (*(*rbx_2 + 0x740))(rbx_2, arg1)
                        result = (*(*rbx_2 + 0x748))(rbx_2)
                
                rdi_1 = &rdi_1[1]
                rsi_1 += 1
            while (rsi_1 != r14_2)
    
    i = i_2
    i_1 = i_3 + 1
    rdx_1 = var_38
    i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(rdx_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (rdx_1 == 0)
    return result

return sub_140a74f90(rdx_1)
