// 函数: sub_14062bb00
// 地址: 0x14062bb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t result_1 = arg1
int64_t result

if (arg1 != 0)
    result = sub_140b5b8a0(arg2.d, 0)
    int32_t rcx
    rcx.b = arg_10:4.d == 0
    
    if ((rcx.b & result.b) == 0)
        void* rax = sub_142543020()
        void* rdx = *(result_1 + 0x10)
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
            result = *(result_1 + 0xd0)
            result_1 = result
        
        if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30
                || result != 0)
            void var_28
            sub_140b4c620(&var_28, &arg_10)
            int32_t var_20 = 0xffffffff
            char var_1c = 2
            void arg_8
            
            if ((*(*result_1 + 0x398))(result_1, &var_28, &arg_8, 0) == 0)
                sub_140b4c620(&var_28, &arg_10)
                int32_t var_20_1 = 0xffffffff
                char var_1c_1 = 2
                void var_18
                
                if ((*(*result_1 + 0x3a8))(result_1, &var_28, &var_18, 0) == 0)
                    sub_140b4c620(&var_28, &arg_10)
                    int32_t var_20_2 = 0xffffffff
                    char var_1c_2 = 2
                    void arg_18
                    return (*(*result_1 + 0x3c8))(result_1, &var_28, &arg_18, 0)
            
            return 1

result.b = 0
return result
