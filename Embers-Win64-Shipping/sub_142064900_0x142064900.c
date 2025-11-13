// 函数: sub_142064900
// 地址: 0x142064900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t i_2 = 0
int32_t var_18 = 0xffffffff
void* result
int32_t zmm1
result, zmm1 = sub_140d3cc80(sub_1424c3700(), &var_28, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
int64_t rdx_1 = var_28
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
    
    int64_t* rbx_1 = *(rdx_1 + (sx.q(i_1) << 3))
    
    if (rbx_1 != 0)
        if (sub_140d23dc0(rbx_1, 0x30) == 0)
            int32_t rax_3 = *(rbx_1 + 0xc)
            void* const rax_7
            
            if (rax_3 s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                uint32_t rdx_2 = zx.d(rax_3.w)
                
                if (rax_3 s< 0)
                    rax_3 += 0xffff
                    rdx_2 -= 0x10000
                
                rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx_2) * 0x18
            
            if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
                if ((rbx_1[1].b & 0x30) == 0)
                    rbx_1[0xbc].b |= 2
                    int64_t* rcx_5 = rbx_1[0x88]
                    
                    if (rcx_5 != 0 && ((rcx_5[1].d u>> 0xa).b & 1) == 0)
                        sub_140cd85e0(rcx_5)
                        float zmm6[0x4] = sub_1420501d0(rbx_1, zmm1, zmm6)
                
                zmm1 = sub_141ee8490(rbx_1)
        
        rdx_1 = var_28
        i = i_2
        i_1 = i_3
    
    result = zx.q(i_1 + 1)
    i_3 = result.d
    i_1 = result.d
    
    if (result.d s< i)
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
