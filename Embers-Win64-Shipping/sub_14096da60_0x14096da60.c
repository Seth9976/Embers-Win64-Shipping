// 函数: sub_14096da60
// 地址: 0x14096da60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
int64_t* result = (*(*arg1 + 0x2a0))(arg1, &var_28)
int64_t* rcx = var_28

if (rcx != 0)
    result = (*(*rcx + 0x218))(rcx, &arg1[0x15])
    
    if (arg3 == 0)
        int64_t* rbx_1 = var_28
        int64_t var_48 = 0
        int64_t var_40_1 = 0
        int32_t arg_24 = 0
        void arg_8
        result = (*(*rbx_1 + 0x2d0))(rbx_1, arg2, &var_48, (*sub_140b5e500(&arg_8, 0x121)).q)
        
        if (result.b != 0)
            int64_t rax_5 = (*(*arg1 + 0x150))(arg1)
            int64_t rdx_4 = *arg1
            result = sub_142029890((*(rdx_4 + 0x298))(arg1, rdx_4), rax_5)
            
            if (result != 0)
                if (arg1[0x31].b != 0)
                    sub_140a20ba0(&var_48, u"?bIsFromInvite", 0xe)
                    arg1[0x31].b = 0
                
                int64_t var_38 = 0
                int64_t var_30_1 = 0
                var_38.o = var_38.o
                result = sub_142264250(result, &var_48, nullptr, 0, &var_38)
        
        int64_t rcx_8 = var_48
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)

int64_t* var_20

if (var_20 != 0)
    result = zx.q(var_20[1].d)
    var_20[1].d -= 1
    
    if (result.d == 1)
        result = (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
