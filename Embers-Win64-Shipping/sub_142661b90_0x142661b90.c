// 函数: sub_142661b90
// 地址: 0x142661b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd1530(arg1)
int32_t rax = *(arg1 + 0xc)
void* const rax_6

if (rax s>= data_143e1d9b4)
    rax_6 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_2
    rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18

uint64_t rax_8 = zx.q(*(rax_6 + 8) u>> 0x1d)

if ((rax_8.b & 1) == 0)
    rax_8 = zx.q(arg1[1].d u>> 4)
    
    if ((rax_8.b & 1) == 0)
        char rax_12 = sub_142669020(arg1)
        *(arg1 + 0x59) &= 0xfe
        *(arg1 + 0x59) |= rax_12
        
        if ((arg1[0x7f].b & 1) == 0 && ((arg1[1].d u>> 4).b & 1) == 0)
            void* rax_16 = (*(*arg1 + 0x150))(arg1)
            
            if (rax_16 != 0)
                int64_t* rdi_1 = *(rax_16 + 0x120)
                
                if (rdi_1 != 0)
                    void* rax_17 = sub_14269bba0()
                    void* rcx_4 = rdi_1[2]
                    int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                    
                    if (rax_18.d s<= *(rcx_4 + 0x38)
                            && *(*(rcx_4 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                        (*(*rdi_1 + 0x310))(rdi_1, arg1)
        
        rax_8 = (*(*arg1 + 0x760))(arg1)
        arg1[0x45] = rax_8
    else if (*(arg1 + 0x2ac) == 3)
        uint8_t rax_11 = ((arg1[0x55].d u>> 5).b & 1) * 2
        *(arg1 + 0x2ac) = rax_11
        return rax_11

return rax_8
