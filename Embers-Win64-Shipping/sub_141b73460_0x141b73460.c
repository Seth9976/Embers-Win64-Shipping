// 函数: sub_141b73460
// 地址: 0x141b73460
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
void* rbx_8

if (rax_2 == 0 || rdi_1 == 0)
    if (sub_140cc16a0(&var_48, sub_140bdfab0()) != 0)
        int64_t* rbx_9 = var_48
        
        if (rbx_9 != 0)
            sub_1413f7120(arg2, rbx_9)
            return sub_141b97490(arg1, rbx_9, arg4)
    
    sub_140cea340()
    
    if (sub_140cc1670(&var_48, &data_143e1b820).b == 0 || var_48 == 0)
        result.b = 0
    else
        void* rax_12 = sub_141b46500(arg2)
        uint64_t rbp_2 = zx.q(sub_1408e52c0(rax_12))
        void var_38
        int128_t* rax_14 = sub_141b464f0(rax_12, &var_38)
        
        if (*(rax_14 + 8) != 0)
            rdi_1 = nullptr
        else
            rdi_1 = *rax_14
        
        int64_t* rbx_11 = rdi_1
        
        if (rdi_1 != 0 && (*(rdi_1[1] + 0x16) & 1) != 0)
            rbx_11 = rdi_1[0xf]
        
        int64_t rbx_12 = rbx_11[1]
        sub_140d11680()
        
        if (rbx_12 != &data_143e1be30)
            result.b = 0
        else
            if (rbp_2.d == 0xffffffff)
                rbp_2 = 0
            
            if (*(rdi_1 + 0x3c) != 4 || rbp_2.d s>= rdi_1[7].d)
                result.b = 0
            else
                int64_t rbx_13 = sx.q((rbp_2 << 2).d)
                result = arg1 + sx.q(*(rdi_1 + 0x4c))
                rbx_8 = rbx_13 + result
                
                if (rbx_13 == neg.q(result))
                    result.b = 0
                else
                    sub_140a8cee0(arg2, rbx_8)
                    
                    if (arg4 == rbx_8)
                        *r13 = rdi_1
                        result.b = 1
                    else
                        if (not(test_bit(zx.q(rdi_1[8].d), 0x1e)))
                            goto label_141b73662
                        
                        memcpy(arg4, rbx_8, *(rdi_1 + 0x3c))
                        result.b = 1
                        *r13 = rdi_1
else if (rax_1 == 0xffffffff)
    int64_t* rbx_5 = rdi_1
    
    if ((*(rdi_1[1] + 0x16) & 1) != 0)
        rbx_5 = rdi_1[0xf]
    
    int64_t rbx_6 = rbx_5[1]
    sub_140d11680()
    
    if (rbx_6 != &data_143e1be30 || *(rdi_1 + 0x3c) != 4)
        result.b = 0
    else
        int64_t rbx_7 = sx.q(*(rdi_1 + 0x4c))
        rbx_8 = rbx_7 + arg1
        
        if (rbx_7 == neg.q(arg1))
            result.b = 0
        else
            sub_140a8cee0(arg2, rbx_8)
            
            if (arg4 == rbx_8)
                *r13 = rdi_1
                result.b = 1
            else if (not(test_bit(zx.q(rdi_1[8].d), 0x1e)))
            label_141b73662:
                (*(*rdi_1 + 0xb0))(rdi_1, arg4, rbx_8, 1)
                *r13 = rdi_1
                result.b = 1
            else
                memcpy(arg4, rbx_8, *(rdi_1 + 0x3c))
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
        if (rbx_1 != 0 && (*(*(rbx_1 + 8) + 0x16) & 1) != 0)
            rbx_1 = *(rbx_1 + 0x78)
        
        int64_t rbx_2 = *(rbx_1 + 8)
        sub_140d11680()
        
        if (rbx_2 != &data_143e1be30 || *(rdi_1[0xf] + 0x3c) != 4 || r14_1[1].d == 0)
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
