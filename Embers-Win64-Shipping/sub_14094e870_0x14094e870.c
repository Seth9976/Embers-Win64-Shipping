// 函数: sub_14094e870
// 地址: 0x14094e870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_50
int32_t result = (*(*arg2 + 0x70))(arg2, &var_50)

if (var_50 != 0)
    void arg_20
    int64_t* rax_2 = (*(*arg2 + 0x10))(arg2, &arg_20)
    void* rdi_1 = *arg1
    int64_t rbx_1 = *rax_2
    int32_t rax_3 = *(rdi_1 + 0x28)
    int64_t arg_10 = rbx_1
    
    if (rax_3 != *(rdi_1 + 0x54))
        int32_t rax_5 = sub_140b5ead0(rbx_1.d) + arg_10:4.d
        void* r8_1 = rdi_1 + 0x58
        void* rcx_3 = *(r8_1 + 8)
        
        if (rcx_3 != 0)
            r8_1 = rcx_3
        
        int32_t i = *(r8_1 + (((sx.q(*(rdi_1 + 0x68)) - 1) & sx.q(rax_5)) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_2 = *(rdi_1 + 0x20)
            
            do
                int64_t i_1 = sx.q(i)
                int64_t rdx_5 = i_1 * 3
                
                if (*(r8_2 + (rdx_5 << 3)) == rbx_1)
                    if (i != 0xffffffff)
                        void* rdx_6 = r8_2 + i_1 * 0x18
                        
                        if (rdx_6 != 0 && rdx_6 != -8 && *(rdx_6 + 8) != 0)
                            int64_t* rcx_4 = var_50
                            (*(*rcx_4 + 0x90))(rcx_4)
                    
                    break
                
                i = *(r8_2 + (rdx_5 << 3) + 0x10)
            while (i != 0xffffffff)
    
    int64_t* rcx_5 = var_50
    int64_t arg_18
    (*(*rcx_5 + 0x88))(rcx_5, &arg_18, *arg1 + 0x10)
    void var_58
    int64_t* rax_11 = (*(*arg2 + 0x10))(arg2, &var_58)
    void* rsi_1 = *arg1
    int32_t var_40
    sub_140598750(rsi_1 + 0x20, &var_40)
    int64_t* var_38
    *var_38 = *rax_11
    var_38[1] = arg_18
    var_38[2].d = 0xffffffff
    int64_t rbx_3 = *var_38
    result = sub_1405b8300(rsi_1 + 0x20, &arg_10, (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d), 
        var_38, var_40, nullptr)

int64_t* var_48

if (var_48 != 0)
    result = var_48[1].d
    var_48[1].d -= 1
    
    if (result == 1)
        result = (**var_48)(var_48)
        int32_t rbp_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (rbp_1 == 1)
            return (*(*var_48 + 8))(var_48, zx.q(rbp_1))

return result
