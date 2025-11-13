// 函数: sub_142130fa0
// 地址: 0x142130fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int64_t* rbx = nullptr
int64_t* rdi = arg2
void* rcx = *r8
int32_t arg_10
void* result
bool cond:1

if (rcx + 4 u> r8[1])
    int32_t rax_1
    rax_1.b = arg2[0xe] != 0
    arg_10 = rax_1
    result, arg2, r8 = (*(*arg2 + 0x150))(rdi, &arg_10, 4)
    cond:1 = arg_10 != 0
else
    cond:1 = *rcx != 0
    result = rcx + 4
    *r8 = result

arg2.b = cond:1

if (arg2.b != 0)
    if (rdi[0xe] == 0)
        void** rdx_6 = rdi[1]
        void* rcx_9 = *rdx_6
        bool cond:2_1
        
        if (rcx_9 + 4 u> rdx_6[1])
            int64_t rax_13 = *rdi
            arg_10 = 0
            result, r8 = (*(rax_13 + 0x150))(rdi, &arg_10, 4)
            cond:2_1 = arg_10 != 0
        else
            cond:2_1 = *rcx_9 != 0
            result = rcx_9 + 4
            *rdx_6 = result
        
        r8.b = cond:2_1
        
        if (r8.b != 0)
            void*** rax_14 = j_sub_140a82f30(0x80)
            
            if (rax_14 != 0)
                int64_t* rax_15 = sub_142118f80(rax_14)
                rbx = rax_15
                
                if (rax_15 != 0)
                    EnterCriticalSection(&data_143f4ab20)
                    *(rbx + 0x74) += 1
                    LeaveCriticalSection(&data_143f4ab20)
            
            result = sub_1421308b0(rbx, rdi, 1, rdi[5].b & 1, arg4, arg3)
            
            if (result.b == 0)
            label_1421311aa:
                
                if (rbx != 0)
                    return sub_14212fcb0(rbx)
            else
                result = &arg1[1]
                
                if (result == &arg_10)
                    goto label_1421311aa
                
                int64_t* rcx_13 = *result
                *result = rbx
                
                if (rcx_13 != 0)
                    return sub_14212fcb0(rcx_13)
    else
        void* rax_6 = arg1[1]
        
        if (rax_6 != 0 && ((*(rax_6 + 0x7c) u>> 2).b & 1) != 0)
            rbx = 1
        
        void** r8_2 = rdi[1]
        void* rcx_5 = *r8_2
        bool cond:3_1
        
        if (rcx_5 + 4 u> r8_2[1])
            int64_t rax_10 = *rdi
            arg_10 = rbx.d
            result, arg2, r8_2 = (*(rax_10 + 0x150))(rdi, &arg_10, 4)
            cond:3_1 = arg_10 != 0
        else
            cond:3_1 = *rcx_5 != 0
            result = rcx_5 + 4
            *r8_2 = result
        
        arg2.b = cond:3_1
        
        if (arg2.b != 0)
            r8_2.b = 1
            return sub_1421308b0(arg1[1], rdi, r8_2.b, 0, arg4, arg3) __tailcall
else if ((rdi[5].b & 1) != 0)
    int64_t var_18
    int64_t* rax_4 = (*(*arg1 + 0x298))(arg1, &var_18)
    int16_t* const r9_1
    
    if (rax_4[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_4
    
    sub_140af98a0("Unknown", 0x390, 
        This platform requires cooked packages, and shaders were not cooked into this material %s.", 
        r9_1)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    return sub_140afbb40() __tailcall

return result
