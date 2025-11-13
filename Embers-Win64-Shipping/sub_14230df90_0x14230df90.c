// 函数: sub_14230df90
// 地址: 0x14230df90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Physics")
int64_t* rbx = *(arg1 + 0x28)

if (rbx != 0)
    int32_t rax_1 = *(rbx + 0xc)
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
    
    if ((*(rax_8 + 8) & 0x30000000) == 0)
        (*(*rbx + 0x390))(rbx)
        
        if ((rbx[0x11].b & 1) != 0)
            if (arg3 != 1)
            label_14230e03d:
                int64_t* rbx_1 = *(arg1 + 0x28)
                
                if ((rbx_1[0x11].b & 1) != 0)
                    int64_t arg_8 = 0
                    
                    if ((*(*rbx_1 + 0x3e8))(rbx_1, 0) != 0)
                        arg_8 = 0
                        
                        if (sub_1422aaae0(rbx_1, 0) != 0)
                            sub_1422aeae0(rbx_1)
                
                if (sub_142253600(rbx_1) != 0 && (rbx_1[0x11].b & 1) != 0)
                    sub_142240e70(rbx_1, arg1)
            else
                int64_t* rcx_5 = rbx[0x14]
                
                if (rcx_5 != 0 && (*(*rcx_5 + 0x458))(rcx_5) != 0)
                    goto label_14230e03d

return sub_140b37f60("Physics") __tailcall
