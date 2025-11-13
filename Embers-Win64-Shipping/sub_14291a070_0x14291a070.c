// 函数: sub_14291a070
// 地址: 0x14291a070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
__chkstk(0x40)
void* rax = *arg4
int64_t arg_20 = 0
int64_t r10 = *(rax + 0x48)

if (r10 != 0)
    if (arg2 u> 0x7fffffff)
        sub_1428a5670(0x10, 0xf6, 0xa1, "crypto\ec\ec_kmeth.c", 0x8b)
        return 0
    
    int64_t var_18
    
    if (r10(&arg_20, &var_18) != 0)
        int64_t rbx
        int64_t rdi
        
        if (arg5 == 0)
            int64_t r8_1 = arg_10
            rbx = var_18
            rdi = arg_20
            
            if (r8_1 u> rbx)
                r8_1 = rbx
            
            arg_10 = r8_1
            memcpy(arg1, rdi, r8_1.d)
        else
            arg5(arg_20, var_18, arg1, &arg_10)
            rdi = arg_20
            rbx = var_18
        
        sub_1428a6890(rdi, rbx, "crypto\ec\ec_kmeth.c", 0x97)
        return zx.q(arg_10.d)
else
    sub_1428a5670((r10 + 0x10).d, 0xf6, 0x98, "crypto\ec\ec_kmeth.c", 0x87)

return 0
