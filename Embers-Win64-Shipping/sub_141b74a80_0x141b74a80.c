// 函数: sub_141b74a80
// 地址: 0x141b74a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141b46500(arg2)
int32_t rax_1 = sub_1408e52c0(rax)
int64_t var_48
sub_141b464f0(rax, &var_48)
sub_140cea1e0()
char rax_2 = sub_140cc1670(&var_48, &data_143e1b870)
int64_t rbx_1

if (rax_2 != 0)
    rbx_1 = var_48

int64_t result
int64_t rdi_5

if (rax_2 == 0 || rbx_1 == 0)
    result = sub_140cc16a0(&var_48, sub_140bdfab0())
    int64_t rdx_8
    
    if (result.b != 0)
        rdx_8 = var_48
    
    if (result.b == 0 || rdx_8 == 0)
        sub_140cea340()
        
        if (sub_140cc1670(&var_48, &data_143e1b820).b == 0 || var_48 == 0)
            result.b = 0
        else
            void* rax_9 = sub_141b46500(arg2)
            int32_t rdi_6 = sub_1408e52c0(rax_9)
            void var_38
            result = sub_141b464f0(rax_9, &var_38)
            
            if (*(result + 8) != 0)
                result.b = 0
            else
                rbx_1 = *result
                
                if (rbx_1 == 0 || ((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x14).b & 1) == 0)
                    result.b = 0
                else
                    result = sub_140e2de30()
                    result.b = *(rbx_1 + 0x78) == result
                    
                    if (result.b == 0)
                        result.b = 0
                    else
                        if (rdi_6 == 0xffffffff)
                            rdi_6 = 0
                        
                        if (*(rbx_1 + 0x3c) != 0x88 || rdi_6 s>= *(rbx_1 + 0x38))
                            result.b = 0
                        else
                            int64_t rdi_7 = sx.q(rdi_6 * 0x88)
                            result = arg1 + sx.q(*(rbx_1 + 0x4c))
                            rdi_5 = rdi_7 + result
                            
                            if (rdi_7 == neg.q(result))
                                result.b = 0
                            else
                                sub_140a8cee0(arg2, rdi_5)
                                
                                if (arg4 == rdi_5)
                                    *arg3 = rbx_1
                                    result.b = 1
                                else
                                    if (not(test_bit(zx.q(*(rbx_1 + 0x40)), 0x1e)))
                                        goto label_141b74c91
                                    
                                    memcpy(arg4, rdi_5, *(rbx_1 + 0x3c))
                                    result.b = 1
                                    *arg3 = rbx_1
    else
        sub_1413f7120(arg2, rdx_8)
        result.b = 0
else if (rax_1 != 0xffffffff)
    char rbp_1 = (*(rbx_1 + 0x80)).b
    int64_t* rdi_1 = sx.q(*(rbx_1 + 0x4c)) + arg1
    void* r15_1 = *(rbx_1 + 0x78)
    int32_t r13_1 = *(r15_1 + 0x3c)
    
    if (rax_1 s< 0 || rax_1 s>= rdi_1[1].d || r15_1 == 0
            || ((zx.q(*(*(r15_1 + 8) + 0x10)) u>> 0x14).b & 1) == 0)
        result.b = 0
    else
        result = sub_140e2de30()
        result.b = *(r15_1 + 0x78) == result
        
        if (result.b == 0 || *(*(rbx_1 + 0x78) + 0x3c) != 0x88 || rdi_1[1].d == 0)
            result.b = 0
        else
            result = *rdi_1
            
            if ((not.b(rbp_1) & 1) == 0 && (result.b & 1) != 0)
                result = (result s>> 1) + rdi_1
            
            int64_t rdi_2 = sx.q(r13_1 * rax_1)
            int64_t rdi_3 = rdi_2 + result
            
            if (rdi_2 == neg.q(result))
                result.b = 0
            else
                sub_140a8cee0(arg2, rdi_3)
                int64_t* rcx_7 = *(rbx_1 + 0x78)
                
                if (arg4 == rdi_3)
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1
                else if (not(test_bit(zx.q(rcx_7[8].d), 0x1e)))
                    (*(*rcx_7 + 0xb0))(rcx_7, arg4, rdi_3, 1)
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1
                else
                    memcpy(arg4, rdi_3, *(rcx_7 + 0x3c))
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1
else if (((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x14).b & 1) == 0)
    result.b = 0
else
    result = sub_140e2de30()
    result.b = *(rbx_1 + 0x78) == result
    
    if (result.b == 0 || *(rbx_1 + 0x3c) != 0x88)
        result.b = 0
    else
        int64_t rdi_4 = sx.q(*(rbx_1 + 0x4c))
        rdi_5 = rdi_4 + arg1
        
        if (rdi_4 == neg.q(arg1))
            result.b = 0
        else
            sub_140a8cee0(arg2, rdi_5)
            
            if (arg4 == rdi_5)
                *arg3 = rbx_1
                result.b = 1
            else if (not(test_bit(zx.q(*(rbx_1 + 0x40)), 0x1e)))
            label_141b74c91:
                (*(*rbx_1 + 0xb0))(rbx_1, arg4, rdi_5, 1)
                *arg3 = rbx_1
                result.b = 1
            else
                memcpy(arg4, rdi_5, *(rbx_1 + 0x3c))
                result.b = 1
                *arg3 = rbx_1
return result
