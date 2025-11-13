// 函数: sub_140977cc0
// 地址: 0x140977cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x28)

if (arg4 != 0)
    int64_t* rcx = *(arg4 + 0x58)
    
    if (rcx != 0)
        int32_t rax_1 = sub_142168a40(rcx)
        
        if (rax_1 == 1)
            int64_t rdi_1 = *(arg4 + 0x1550)
            int64_t arg_8
            void arg_20
            void var_38
            
            if (rdi_1 != *sub_140b58260(&arg_20, u"LIVE", rax_1))
                if (rdi_1 != *sub_140b58260(&var_38, &data_142e2ecf0, 1))
                    arg_8 = 0
                else
                    sub_140b58260(&arg_8, u"PS4SERVER", 1)
            else
                sub_140b58260(&arg_8, u"LIVESERVER", 1)
            int32_t rcx_5
            rcx_5.b = sub_140b5b8a0(arg_8.d, 0) == 0
            
            if ((arg_8:4.d != 0 | rcx_5.b) != 0)
                rbx = arg_8

int64_t* var_30
sub_140964600(&var_30, arg3, rbx)
int64_t* rcx_7 = var_30

if (rcx_7 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    (*(*rcx_7 + 0xc0))(rcx_7, arg2, arg5)

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t rdi_2 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*var_28 + 8))(var_28, zx.q(rdi_2))

return arg2
