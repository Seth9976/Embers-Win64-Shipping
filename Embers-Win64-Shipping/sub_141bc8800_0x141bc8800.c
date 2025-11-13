// 函数: sub_141bc8800
// 地址: 0x141bc8800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141bc9780(arg1)
int64_t arg_8

if (arg1[0x22].d s> 0)
    void* rbx_1 = *arg1[0x21]
    
    if (rbx_1 != 0)
        void* rax_2 = sub_141bf83d0()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            arg_8 = 0
            void* rax_6 = sub_140d2dfc0(sub_141bf83d0(), arg1, 0, 0, 0, 0, 0, 0, 0)
            void* const rax_7
            
            if (arg1[0x22].d s<= 0)
                rax_7 = nullptr
            else
                rax_7 = *arg1[0x21]
            
            void* rax_8 = *(rax_7 + 0x30)
            *(rax_6 + 0x30) = rax_8
            *(rax_8 + 0x28) = rax_6
            *arg1[0x21] = rax_6

int64_t* result = sub_140cdd6a0(arg1)

if (result.d s< 0x18d)
    result = arg1[0x24]
    
    if (result != 0)
        void* rcx_5 = result[5]
        int64_t rbx_2 = data_143e243e8
        
        if (rcx_5 != 0)
            result = (*(*(rcx_5 + 0x28) + 0x10))(rcx_5 + 0x28)
            int64_t* result_1 = result
            
            if (result != 0)
                int64_t r8_2 = *result
                result = (*(r8_2 + 0x10))(result, &arg_8, r8_2)
                
                if (*result == rbx_2)
                    result = sub_140de14d0(&arg1[0x25], result_1)
        
        arg1[0x24] = 0

return result
