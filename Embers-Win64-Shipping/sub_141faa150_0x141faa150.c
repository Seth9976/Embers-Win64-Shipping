// 函数: sub_141faa150
// 地址: 0x141faa150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("RepNotifies")
int64_t* rbx = *(arg1 + 0x48)

if (rbx != 0)
    int32_t rax_1 = *(rbx + 0xc)
    void* rsi_1 = nullptr
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        void* rcx_4 = *(arg1 + 0x50)
        
        if (rcx_4 == 0)
        label_141faa1ed:
            void* rax_13
            
            if (arg2 != 0)
                rax_13 = *(arg1 + 0x58)
            
            if (arg2 == 0 || rax_13 == 0 || *(rax_13 + 0x100) s<= 0)
                sub_1422bd9b0(*(arg1 + 0x20), **(arg1 + 0x30), rbx)
                int32_t rax_14 = *(rbx + 0xc)
                
                if (rax_14 s< data_143e1d9b4)
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rax_14)
                    uint32_t rdx_6 = zx.d(temp2_1)
                    int32_t rax_16 = temp3_1 + rdx_6
                    rsi_1 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_16.w) - rdx_6) * 0x18
                
                if (((*(rsi_1 + 8) u>> 0x1d).b & 1) == 0)
                    (*(*rbx + 0x1e8))(rbx)
        else
            int64_t* rcx_5 = *(rcx_4 + 0x58)
            
            if (rcx_5 == 0)
                goto label_141faa1ed
            
            if ((*(*rcx_5 + 0x398))(rcx_5) == 0)
                goto label_141faa1ed

return sub_140b37f60("RepNotifies") __tailcall
