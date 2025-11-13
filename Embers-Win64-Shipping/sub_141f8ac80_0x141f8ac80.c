// 函数: sub_141f8ac80
// 地址: 0x141f8ac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
sub_140cdd9c0(arg1, arg2)
int64_t* i = *(arg1 + 0xa0)
int64_t result = sx.q(*(arg1 + 0xa8))

for (void* r15 = &i[result]; i != r15; i = &i[1])
    void* rdi_1 = *i
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    int32_t var_50 = 0xffffffff
    int64_t var_4c_1 = 0
    int64_t var_40 = 0
    
    if (rdi_1 == 0)
        int64_t arg_18 = 0
        var_40 = 0
    else
        void var_68
        int64_t* rax = sub_140d21d60(&var_68, rdi_1)
        var_40 = *rax
        
        if (&var_38 != &rax[1])
            int64_t rcx_2 = var_38
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            var_38 = rax[1]
            rax[1] = 0
            var_30_1.d = rax[2].d
            var_30_1:4.d = *(rax + 0x14)
            rax[2] = 0
        
        int64_t var_60
        
        if (var_60 != 0)
            sub_140a74f90(var_60)
        
        sub_140d3a3a0(&var_50, rdi_1)
        int32_t rax_4 = 0
        
        if (0 == data_1439aaa30)
            data_1439aaa30 = 0
        else
            rax_4 = data_1439aaa30
        
        var_4c_1:4.d = rax_4
    
    result = sub_140d3c6e0(&var_50)
    int64_t result_2 = result
    
    if (result != 0)
    label_141f8ade8:
        void* rax_7 = sub_1424987b0()
        void* rdx_3 = *(result_2 + 0x10)
        result = sx.q(*(rax_7 + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38))
            int64_t result_1 = result
            result = *(rdx_3 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_7 + 0x30)
                int64_t rdi_2 = sx.q(r14[1].d)
                int32_t rax_8 = (rdi_2 + 1).d
                r14[1].d = rax_8
                
                if (rax_8 s> *(r14 + 0xc))
                    sub_1405a4d70(r14)
                
                result = *r14
                *(result + (rdi_2 << 3)) = result_2
    else if (var_40 != 0)
        if (result.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            result = zx.q(data_1439aaa30)
        
        if (result.d != var_4c_1:4.d || var_50 != 0xffffffff)
            void* rax_5 = sub_140d2bce0(&var_40)
            sub_140d3a3a0(&var_50, rax_5)
            
            if (rax_5 != 0 || data_143e1d7b4 == 0)
                int32_t rax_6 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_6 = data_1439aaa30
                
                var_4c_1:4.d = rax_6
            
            result = sub_140d3c6e0(&var_50)
            result_2 = result
            
            if (result != 0)
                goto label_141f8ade8
    
    int64_t rcx_10 = var_38
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)

return result
