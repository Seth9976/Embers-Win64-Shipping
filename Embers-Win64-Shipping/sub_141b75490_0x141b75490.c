// 函数: sub_141b75490
// 地址: 0x141b75490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r13 = arg3
void* rax = sub_141b46500(arg2)
int32_t rax_1 = sub_1408e52c0(rax)
int64_t* var_48
sub_141b464f0(rax, &var_48)
sub_140cea1e0()
char rax_2 = sub_140cc1670(&var_48, &data_143e1b870)
int64_t* rdi_1

if (rax_2 != 0)
    rdi_1 = var_48

int64_t result
void* rbx_7

if (rax_2 == 0 || rdi_1 == 0)
    if (sub_140cc16a0(&var_48, sub_140bdfab0()) != 0)
        int64_t* rbx_8 = var_48
        
        if (rbx_8 != 0)
            sub_1413f7120(arg2, rbx_8)
            return sub_141b97980(arg1, rbx_8, arg4)
    
    sub_140cea340()
    
    if (sub_140cc1670(&var_48, &data_143e1b820).b == 0 || var_48 == 0)
        result.b = 0
    else
        void* rax_10 = sub_141b46500(arg2)
        int32_t rbp_2 = sub_1408e52c0(rax_10)
        void var_38
        int64_t** rax_12 = sub_141b464f0(rax_10, &var_38)
        
        if (rax_12[1].b != 0)
            rdi_1 = nullptr
        else
            rdi_1 = *rax_12
        
        int64_t rbx_10 = rdi_1[1]
        sub_140d11f70()
        
        if (rbx_10 != &data_143e1c450)
            result.b = 0
        else
            if (rbp_2 == 0xffffffff)
                rbp_2 = 0
            
            if (*(rdi_1 + 0x3c) != 0x10 || rbp_2 s>= rdi_1[7].d)
                result.b = 0
            else
                result = sx.q(*(rdi_1 + 0x4c)) + arg1
                int64_t rbx_11 = sx.q(rbp_2 << 4)
                rbx_7 = rbx_11 + result
                
                if (rbx_11 == neg.q(result))
                    result.b = 0
                else
                    sub_140a8cee0(arg2, rbx_7)
                    
                    if (arg4 == rbx_7)
                        *r13 = rdi_1
                        result.b = 1
                    else
                        if (not(test_bit(zx.q(rdi_1[8].d), 0x1e)))
                            goto label_141b7566e
                        
                        memcpy(arg4, rbx_7, *(rdi_1 + 0x3c))
                        result.b = 1
                        *r13 = rdi_1
else if (rax_1 == 0xffffffff)
    int64_t rbx_5 = rdi_1[1]
    sub_140d11f70()
    
    if (rbx_5 != &data_143e1c450 || *(rdi_1 + 0x3c) != 0x10)
        result.b = 0
    else
        int64_t rbx_6 = sx.q(*(rdi_1 + 0x4c))
        rbx_7 = rbx_6 + arg1
        
        if (rbx_6 == neg.q(arg1))
            result.b = 0
        else
            sub_140a8cee0(arg2, rbx_7)
            
            if (arg4 == rbx_7)
                *r13 = rdi_1
                result.b = 1
            else if (not(test_bit(zx.q(rdi_1[8].d), 0x1e)))
            label_141b7566e:
                (*(*rdi_1 + 0xb0))(rdi_1, arg4, rbx_7, 1)
                *r13 = rdi_1
                result.b = 1
            else
                memcpy(arg4, rbx_7, *(rdi_1 + 0x3c))
                result.b = 1
                *r13 = rdi_1
else
    void* rbx_1 = rdi_1[0xf]
    int64_t* r14_1 = arg1 + sx.q(*(rdi_1 + 0x4c))
    char rbp_1 = (rdi_1[0x10].d).b
    int32_t r13_1 = *(rbx_1 + 0x3c)
    
    if (rax_1 s< 0 || rax_1 s>= r14_1[1].d)
        result.b = 0
    else
        int64_t rbx_2 = *(rbx_1 + 8)
        sub_140d11f70()
        
        if (rbx_2 != &data_143e1c450 || *(rdi_1[0xf] + 0x3c) != 0x10 || r14_1[1].d == 0)
            result.b = 0
        else
            result = *r14_1
            
            if ((not.b(rbp_1) & 1) == 0 && (result.b & 1) != 0)
                result = (result s>> 1) + r14_1
            
            int64_t rbx_3 = sx.q(r13_1 * rax_1)
            int64_t rbx_4 = rbx_3 + result
            
            if (rbx_3 == neg.q(result))
                result.b = 0
            else
                sub_140a8cee0(arg2, rbx_4)
                int64_t* rcx_5 = rdi_1[0xf]
                
                if (arg4 == rbx_4)
                    *arg3 = rdi_1[0xf]
                    result.b = 1
                else if (not(test_bit(zx.q(rcx_5[8].d), 0x1e)))
                    (*(*rcx_5 + 0xb0))(rcx_5, arg4, rbx_4, 1)
                    *arg3 = rdi_1[0xf]
                    result.b = 1
                else
                    memcpy(arg4, rbx_4, *(rcx_5 + 0x3c))
                    *arg3 = rdi_1[0xf]
                    result.b = 1
return result
