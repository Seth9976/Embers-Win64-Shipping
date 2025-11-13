// 函数: sub_140cdb470
// 地址: 0x140cdb470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg6
uint32_t rcx_1
rcx_1.b = (r12 u>> 4).b & 1
void* i_2 = arg2
void* const result = nullptr
int32_t r15_1 = r12 & 0x8000

if (r15_1 != 0)
    void* i = arg2
    
    while (i != 0)
        void* j = i
        
        if (result == 0)
            while (j != 0)
                void* result_1 = sub_140d2f1a0(arg3, j, arg5, 0)
                result = result_1
                
                if (result_1 != 0 && sub_140d23dc0(result_1, 0x10) == 0)
                    result = nullptr
                
                j = sub_140d209c0(j)
                
                if (result != 0)
                    break
        
        if (((*(i + 8) u>> 4).b & 1) != 0)
            break
        
        i = *(i + 0x20)
        
        if (result != 0)
            break
    
    r12 = arg6
    i_2 = arg2

void* i_1 = i_2

if (result != 0)
    goto label_140cdb87f

while (i_1 != 0)
    void* result_2 = sub_140d2f1a0(arg3, i_1, arg5, 0)
    result = result_2
    
    if (result_2 != 0 && r15_1 != 0 && sub_140d23dc0(result_2, 0x10) != 0)
        result = nullptr
    
    i_1 = *(i_1 + 0x20)
    
    if (result != 0)
        goto label_140cdb87b

if (result != 0)
label_140cdb87b:
    i_2 = arg2
label_140cdb87f:
    
    if ((*(result + 8) & 1) == 0 && i_2 != 0 && sub_140d21d80(result) != sub_140d21d80(arg2))
        char rax_21
        
        if (arg1 != 0 && ((zx.q(*(arg1[1] + 0x10)) u>> 0x1a).b & 1) != 0)
            rax_21 = (*(*arg1 + 0x150))(arg1)
        
        if (arg1 == 0 || ((zx.q(*(arg1[1] + 0x10)) u>> 0x1a).b & 1) == 0 || rax_21 == 0)
            return nullptr
else
    void* result_3 = sub_140d2f1a0(arg3, nullptr, arg5, 0)
    result = result_3
    
    if (result_3 != 0)
        goto label_140cdb87b
    
    void* rsi_1 = result_3 - 1
    int16_t* string_1
    
    if ((r12.b & 0x40) != 0)
        int64_t var_58 = 0
        int64_t var_50_1 = 0
        int64_t var_48_1 = 0
        string_1 = arg5
        
        if (arg5 == 0)
            int32_t var_70_2 = 0
        else
            void* rax_5 = rsi_1
            
            do
                rax_5 += 1
            while (arg5[rax_5] != 0)
            
            int32_t var_70_1 = rax_5.d
        
        string_1.o = string_1.o
        sub_140d2c760(&var_58, &string_1)
        
        if (sub_1405949a0() != 0)
            int64_t var_68
            int16_t** rax_7 = sub_140d30800(&var_58, &var_68)
            int16_t* r8_3
            
            if (rax_7[1].d == 0)
                r8_3 = &data_142d40450
            else
                r8_3 = *rax_7
            
            void* result_4 = sub_140d2f1a0(arg3, nullptr, r8_3, 0)
            int64_t rcx_11 = var_68
            result = result_4
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
        
        if (var_50_1 != 0)
            sub_140a74f90(var_50_1)
    
    if ((r12.b & 0x40) != 0 && result != 0)
        goto label_140cdb87b
    
    if (arg8 != 0)
        void* result_5 = sub_140d2f1a0(arg3, rsi_1, arg5, 0)
        result = result_5
        
        if (result_5 != 0)
            if (r15_1 == 0)
                goto label_140cdb87b
            
            if (sub_140d23dc0(result_5, 0x10) == 0)
                goto label_140cdb87b
            
            result = nullptr
    
    wchar16* rax_9 = wcsrchr(arg5, 0x2e)
    char var_90
    
    if (rax_9 != 0 && rcx_1.b != 0)
        var_90 = 1
        result = sub_140cdb470(arg1, arg2, arg3, arg4, &rax_9[1], 0, arg7, 1, rcx_1)
    
    string_1 = nullptr
    int32_t rdx_7 = 0
    int32_t var_70_3 = 0
    int32_t rcx_18 = 0
    int32_t var_6c_1 = 0
    
    if (arg5 != 0 && *arg5 != 0)
        void* rdi_1 = rsi_1
        
        do
            rdi_1 += 1
        while (arg5[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&string_1, rdi_1.d + 1)
            rcx_18 = var_6c_1
            rdx_7 = var_70_3
        
        int32_t rax_11 = rdx_7 + rdi_1.d + 1
        var_70_3 = rax_11
        
        if (rax_11 s> rcx_18)
            sub_140594770(&string_1)
        
        UnDecorator::getReferenceType(string_1, arg5, (rdi_1.d + 1) * 2)
    
    if (result == 0)
        if (rax_9 != 0)
        label_140cdb7ec:
            
            if (data_143e1d7b4 == 0)
                int64_t rax_15
                
                if (arg2 != 0)
                    rax_15 = sub_140d3cb50(*(arg2 + 0x10))
                
                if (arg2 != 0 && rax_15 != 0)
                    if ((*(rax_15 + 0x290) & 0x100000) != 0)
                        goto label_140cdb82f
                    
                    var_90.q = arg7
                    result = sub_140d2f6f0(arg3, 0, arg5, 0, 0x4002, 0, 1, var_90)
                else
                    rax_15 = sub_140cbccd0(arg1)
                    
                    if (rax_15 == 0 || (*(rax_15 + 0x290) & 0x100000) == 0)
                        var_90.q = arg7
                        result = sub_140d2f6f0(arg3, 0, arg5, 0, 0x4002, 0, 1, var_90)
                    else
                    label_140cdb82f:
                        void* result_6 = sub_140bb75c0(rax_15, arg3, arg5)
                        result = result_6
                        
                        if (result_6 == 0)
                            var_90.q = arg7
                            result = sub_140d2f6f0(arg3, 0, arg5, 0, 0x4002, 0, 1, var_90)
        else
            void* var_a8
            var_a8.d = rsi_1.d
            int32_t rax_12 = sub_140a23cf0(&string_1, &data_142d5a024, 0, (result + 1).d, var_a8.d)
            
            if (rax_12 s>= 0)
                sub_140a20ba0(&string_1, &data_142d404c4, (result + 1).d)
                void* rdx_11 = &arg5[1 + sx.q(rax_12)]
                
                do
                    rsi_1 += 1
                while (*(rdx_11 + (rsi_1 << 1)) != 0)
                
                sub_140a20ba0(&string_1, rdx_11, rsi_1.d)
                int16_t* string = &data_142d40450
                
                if (var_70_3 != 0)
                    string = string_1
                
                if (wcsrchr(string, 0x2e) != 0)
                    goto label_140cdb7ec
    
    int16_t* string_2 = string_1
    
    if (string_2 != 0)
        sub_140a74f90(string_2)
    
    if (result != 0)
        goto label_140cdb87b

return result
