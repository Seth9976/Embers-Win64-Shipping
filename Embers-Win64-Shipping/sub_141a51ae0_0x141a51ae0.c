// 函数: sub_141a51ae0
// 地址: 0x141a51ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2a860 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a860)
    
    if (data_143f2a860 == 0xffffffff)
        atexit(sub_142cf4ea0)
        _Init_thread_footer(&data_143f2a860)

int64_t* rdi = data_143f2a858

if (rdi == 0)
    goto label_141a51b62

int32_t rax_2 = rdi[1].d
int64_t result

if (rax_2 == 0)
    rdi = nullptr
label_141a51b62:
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "MovieScene", 1)
    j_sub_140b3db50()
    int64_t* rax_5 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t r8_1 = *rax_5
    void var_18
    int64_t* rax_6 = (*(r8_1 + 0x50))(rax_5, &var_18, r8_1)
    
    if (&data_143f2a850 != rax_6)
        data_143f2a850 = *rax_6
        *rax_6 = 0
        int64_t* rcx_5 = data_143f2a858
        data_143f2a858 = rax_6[1]
        rax_6[1] = 0
        
        if (rcx_5 != 0)
            int32_t temp2_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)
    
    int64_t* rbx_2 = data_143f2a858
    result = 0
    bool cond:0_1 = rbx_2 != 0
    
    if (rbx_2 != 0)
        int32_t rax_9 = rbx_2[1].d
        
        if (rax_9 != 0)
            rbx_2[1].d = rax_9 + 1
            rax_9.b = 1
        
        if (rax_9.b == 0)
            rbx_2 = nullptr
        
        cond:0_1 = rbx_2 != 0
    
    if (cond:0_1)
        result = data_143f2a850
    
    int64_t* rsi_1 = rdi
    
    if (rbx_2 != rdi)
        rdi = rbx_2
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp8_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    else if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    rdi[1].d = rax_2 + 1
    result = data_143f2a850
    
    if (result == 0)
        goto label_141a51b62

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_3 = *rdi
            (*(r8_3 + 8))(rdi, 1, r8_3)

return result
