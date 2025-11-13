// 函数: sub_141f2b070
// 地址: 0x141f2b070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x14d) & 2) == 0)
    return 

int32_t rax_1 = *(arg1 + 0xc)
int32_t rdi_1 = 0
void* const rax_7

if (rax_1 s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
    return 

uint64_t rbx_1 = arg1[0x15]

if (rbx_1 == 0)
    uint64_t rax = sub_141ee69e0(arg1)
    rbx_1 = rax
    
    if (rax != 0)
        goto label_141f2b0fe
    
    return 

label_141f2b0fe:

if (*(rbx_1 + 0x1f0) == 0)
    int64_t* rax_9 = *(rbx_1 + 0x100)
    
    if (rax_9 == 0)
        rax_9 = sub_14243ab60(rbx_1)
    
    return sub_141f48010(arg1, rax_9, arg2) __tailcall

if ((*(arg1 + 0x209) & 1) != 0)
    uint64_t rax_13
    rax_13.b = (((*(*arg1 + 0x4c8))(arg1) - 1) & 0xfffffffd) == 0
    
    if (rax_13.b != 0)
        int64_t* rbp = *(rbx_1 + 0x100)
        
        if (rbp == 0)
            rbp = sub_14243ab60(rbx_1)
        
        int32_t r14 = *(rbp + 0x25c)
        
        while (true)
            if (rdi_1 s< 0 || rdi_1 s>= arg1[0x54].d)
                rax_13.b = 0
            else
                rax_13.b = 1
            
            if (rax_13.b == 0)
                break
            
            rax_13 = sub_140d3c6e0(sx.q(rdi_1) * 0x8c + 0x74 + arg1[0x53])
            
            if (rax_13 != 0 && (*(rax_13 + 0x209) & 1) != 0)
                int64_t* rbx_2 = *(rax_13 + 0xa0)
                
                if (rbx_2 != 0)
                    void* rax_15 = sub_142565770()
                    void* rdx_5 = rbx_2[2]
                    rax_13 = sx.q(*(rax_15 + 0x38))
                    
                    if (rax_13.d s<= *(rdx_5 + 0x38)
                            && *(*(rdx_5 + 0x30) + (rax_13 << 3)) == rax_15 + 0x30
                            && *(rbx_2 + 0x25c) s> r14 && (*(*rbx_2 + 0x668))(rbx_2, arg1).b != 0)
                        r14 = *(rbx_2 + 0x25c)
                        rbp = rbx_2
            
            rdi_1 += 1
        
        return sub_141f48010(arg1, rbp, arg2) __tailcall

sub_141f4e140(arg1, arg2)
