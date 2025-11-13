// 函数: sub_141e592b0
// 地址: 0x141e592b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141edf430(arg1)
void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

int64_t* rcx_1 = *(rax + 0x1b0)
(*(*rcx_1 + 0x1a0))(rcx_1, arg1)
int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t i = 0
void* result = sub_140d3cc80(sub_1424718b0(), &var_28, 1, 0x10, 0)
int32_t i_1 = var_18 + 1
int64_t rdx_2 = var_28
int32_t i_2 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(rdx_2 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        int32_t var_18_1 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    int64_t* rbx_1 = *(rdx_2 + (sx.q(i_1) << 3))
    
    if (rbx_1 != arg1 && (rbx_1[0x11].b & 1) != 0)
        result = sub_141f4ac00(rbx_1)
        
        if (result.b != 0)
            result = sub_141f4ac80(rbx_1)
            
            if (result.b != 0 && (rbx_1[0x11].b & 1) != 0 && not(9.99999975e-06f f>= rbx_1[0x3e].d)
                    && not(9.99999975e-06f f>= *(rbx_1 + 0x1f4)))
                void* rax_4 = rbx_1[4]
                
                if (rax_4 != 0)
                    result = zx.q(*(rax_4 + 8) u>> 4)
                
                if (rax_4 == 0 || (result.b & 1) == 0)
                    void* rax_6 = rbx_1[0x15]
                    
                    if (rax_6 == 0)
                        rax_6 = sub_141ee69e0(rbx_1)
                    
                    int64_t* rcx_7 = *(rax_6 + 0x1b0)
                    result = (*(*rcx_7 + 0x198))(rcx_7, rbx_1)
        
        rdx_2 = var_28
        break
    
    result = zx.q(i_1 + 1)
    int32_t var_18_2 = result.d
    i_1 = result.d
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(rdx_2 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            int32_t var_18_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (rdx_2 == 0)
    return result

return sub_140a74f90(rdx_2)
