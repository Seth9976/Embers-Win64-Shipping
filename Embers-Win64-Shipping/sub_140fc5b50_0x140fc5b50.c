// 函数: sub_140fc5b50
// 地址: 0x140fc5b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t r14 = 0
int32_t rsi = 0
int64_t var_208 = 0
TEB* gsbase

if (data_143e2b890 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b890)
    
    if (data_143e2b890 == 0xffffffff)
        void var_178
        int64_t rbx_4 = *sub_140b58170(&var_178, "Sockets", 1)
        j_sub_140b3db50()
        data_143e2b888 = j_sub_140b407e0(&data_143de7d78, rbx_4)
        atexit(sub_142ccc220)
        _Init_thread_footer(&data_143e2b890)

int64_t* rcx = data_143e2b888
int64_t* rax_5 = (*(*rcx + 0x48))(rcx, var_208)
int64_t var_200 = 0
int32_t i

do
    void var_158
    sub_1405eb940(&var_158, arg1 + 0x18)
    int64_t var_1c8
    int64_t var_50
    (*(*rax_5 + 0x40))(rax_5, &var_1c8, var_50, 0, 0, var_200, 0)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int32_t var_198
    int64_t rax_7 = sx.q(var_198)
    *(arg1 + 0x118) = rax_7.d
    int64_t var_1b8
    int64_t var_1a8
    void* var_190
    
    if (rax_7.d == 0)
        int32_t var_188
        
        if (var_188 s> 0)
            void* rax_8 = var_190
            int64_t* rbx_1 = *(rax_8 + 0x20)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void var_170
            
            if (arg1 + 8 == &var_170)
            label_140fc5d0b:
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            else
                *(arg1 + 8) = *(rax_8 + 0x18)
                int64_t* rdi_1 = *(arg1 + 0x10)
                
                if (rbx_1 == rdi_1)
                    goto label_140fc5d0b
                
                *(arg1 + 0x10) = rbx_1
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp3_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t var_1f0 = *(arg1 + 8)
            int64_t* rax_13 = *(arg1 + 0x10)
            
            if (rax_13 != 0)
                rax_13[1].d += 1
            
            EnterCriticalSection(&rax_5[1])
            int64_t var_218 = 0
            int32_t rcx_13 = 0
            int32_t var_20c_1 = 0
            int32_t var_210_1 = 0
            
            if (arg1 != -0x18 && *(arg1 + 0x18) != 0)
                int64_t rdi_2 = -1
                
                do
                    rdi_2 += 1
                while (*(arg1 + 0x18 + rdi_2) != 0)
                
                if (rdi_2.d + 1 s> 0)
                    sub_1405947f0(&var_218, rdi_2.d + 1)
                    rcx_13 = var_20c_1
                    r14 = var_210_1
                
                int32_t rax_14 = r14 + rdi_2.d + 1
                int32_t var_210_2 = rax_14
                
                if (rax_14 s> rcx_13)
                    sub_140594770(&var_218)
                
                sub_1405a7220(var_218, rdi_2.d + 1, arg1 + 0x18, rdi_2.d + 1, 0x3f)
            
            int64_t* var_1e0 = &var_218
            int64_t* var_1d8_1 = &var_1f0
            void var_1f8
            sub_140fc4530(&rax_5[6], &var_1f8, &var_1e0, nullptr)
            int64_t rcx_18 = var_218
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            if (rax_5 != -8)
                LeaveCriticalSection(&rax_5[1])
            
            if (rax_13 != 0)
                rax_13[1].d -= 1
                
                if (rax_13[1].d == 1)
                    (**rax_13)(rax_13)
                    int32_t temp5_1 = *(rax_13 + 0xc)
                    *(rax_13 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rax_13 + 8))(rax_13, 1)
            
            i = sub_14094ab00(&var_190)
            
            if (var_1a8 != 0)
                i = sub_140a74f90(var_1a8)
            
            if (var_1b8 != 0)
                i = sub_140a74f90(var_1b8)
            
            int64_t rcx_25 = var_1c8
            
            if (rcx_25 != 0)
                i = sub_140a74f90(rcx_25)
            
            break
        
        *(arg1 + 0x118) = 0x33
    else if (rax_7.d u<= 0x33 && test_bit(0x9000100000000, rax_7))
        rsi = 3
    
    rsi += 1
    i = sub_14094ab00(&var_190)
    
    if (var_1a8 != 0)
        i = sub_140a74f90(var_1a8)
    
    if (var_1b8 != 0)
        i = sub_140a74f90(var_1b8)
    
    int64_t rcx_7 = var_1c8
    
    if (rcx_7 != 0)
        i = sub_140a74f90(rcx_7)
    
    if (*(arg1 + 0x118) == 0)
        break
    
    if (rsi s>= 3)
        break
    
    i = *(arg1 + 0x11c)
while (i == 0)

__security_check_cookie(rax_1 ^ &var_258)
return i
