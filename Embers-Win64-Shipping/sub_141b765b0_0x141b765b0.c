// 函数: sub_141b765b0
// 地址: 0x141b765b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141b46500(arg2)
int32_t rax_1 = sub_1408e52c0(rax)
int64_t var_58
sub_141b464f0(rax, &var_58)
sub_140cea1e0()
char rax_2 = sub_140cc1670(&var_58, &data_143e1b870)
int64_t rdi_1

if (rax_2 != 0)
    rdi_1 = var_58

int64_t result

if (rax_2 == 0 || rdi_1 == 0)
    result = sub_140cc16a0(&var_58, sub_140bdfab0())
    int64_t rdx_8
    
    if (result.b != 0)
        rdx_8 = var_58
    
    if (result.b == 0 || rdx_8 == 0)
        sub_140cea340()
        
        if (sub_140cc1670(&var_58, &data_143e1b820).b == 0 || var_58 == 0)
            result.b = 0
        else
            void* rax_9 = sub_141b46500(arg2)
            int32_t rbp_2 = sub_1408e52c0(rax_9)
            void var_48
            int64_t* rax_11 = sub_141b464f0(rax_9, &var_48)
            void* rsi_2 = nullptr
            int64_t rdi_2
            
            if (rax_11[1].b != 0)
                rdi_2 = 0
            else
                rdi_2 = *rax_11
            
            int64_t rbx_8 = *(rdi_2 + 8)
            sub_140d11050()
            
            if (rbx_8 != &data_143e1b9d0)
                result.b = 0
            else
                if (rbp_2 == 0xffffffff)
                    rbp_2 = 0
                
                if (*(rdi_2 + 0x3c) != 1 || rbp_2 s>= *(rdi_2 + 0x38))
                    result.b = 0
                else
                    result = sx.q(*(rdi_2 + 0x4c)) + arg1
                    int64_t rbx_9 = sx.q(rbp_2)
                    int64_t rbx_10 = rbx_9 + result
                    
                    if (rbx_9 == neg.q(result))
                        result.b = 0
                    else
                        sub_140a8cee0(arg2, rbx_10)
                        void var_38
                        int128_t* rax_13 = sub_141b464f0(rax_9, &var_38)
                        
                        if (*(rax_13 + 8) == 0)
                            rsi_2 = *rax_13
                        
                        result.b = (*(rsi_2 + 0x7b) & *(zx.q(*(rsi_2 + 0x79)) + rbx_10)) != 0
                        *arg4 = result.b
                        result.b = 1
                        *arg3 = rdi_2
    else
        sub_1413f7120(arg2, rdx_8)
        result.b = 0
else if (rax_1 == 0xffffffff)
    int64_t rbx_5 = *(rdi_1 + 8)
    sub_140d11050()
    
    if (rbx_5 != &data_143e1b9d0 || *(rdi_1 + 0x3c) != 1)
        result.b = 0
    else
        int64_t rbx_6 = sx.q(*(rdi_1 + 0x4c))
        int64_t rbx_7 = rbx_6 + arg1
        
        if (rbx_6 == neg.q(arg1))
            result.b = 0
        else
            sub_140a8cee0(arg2, rbx_7)
            
            if (arg4 == rbx_7)
                *arg3 = rdi_1
                result.b = 1
            else if (not(test_bit(zx.q(*(rdi_1 + 0x40)), 0x1e)))
                (*(*rdi_1 + 0xb0))(rdi_1, arg4, rbx_7, 1)
                *arg3 = rdi_1
                result.b = 1
            else
                memcpy(arg4, rbx_7, *(rdi_1 + 0x3c))
                result.b = 1
                *arg3 = rdi_1
else
    void* rbx_1 = *(rdi_1 + 0x78)
    char rbp_1 = (*(rdi_1 + 0x80)).b
    int64_t* rsi_1 = sx.q(*(rdi_1 + 0x4c)) + arg1
    int32_t r13_1 = *(rbx_1 + 0x3c)
    
    if (rax_1 s< 0 || rax_1 s>= rsi_1[1].d)
        result.b = 0
    else
        int64_t rbx_2 = *(rbx_1 + 8)
        sub_140d11050()
        
        if (rbx_2 != &data_143e1b9d0 || *(*(rdi_1 + 0x78) + 0x3c) != 1 || rsi_1[1].d == 0)
            result.b = 0
        else
            result = *rsi_1
            
            if ((not.b(rbp_1) & 1) == 0 && (result.b & 1) != 0)
                result = (result s>> 1) + rsi_1
            
            int64_t rbx_3 = sx.q(r13_1 * rax_1)
            int64_t rbx_4 = rbx_3 + result
            
            if (rbx_3 == neg.q(result))
                result.b = 0
            else
                sub_140a8cee0(arg2, rbx_4)
                int64_t* rcx_5 = *(rdi_1 + 0x78)
                
                if (arg4 == rbx_4)
                    *arg3 = *(rdi_1 + 0x78)
                    result.b = 1
                else if (not(test_bit(zx.q(rcx_5[8].d), 0x1e)))
                    (*(*rcx_5 + 0xb0))(rcx_5, arg4, rbx_4, 1)
                    *arg3 = *(rdi_1 + 0x78)
                    result.b = 1
                else
                    memcpy(arg4, rbx_4, *(rcx_5 + 0x3c))
                    *arg3 = *(rdi_1 + 0x78)
                    result.b = 1

return result
