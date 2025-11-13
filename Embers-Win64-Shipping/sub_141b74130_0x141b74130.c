// 函数: sub_141b74130
// 地址: 0x141b74130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141b46500(arg2)
int32_t rax_1 = sub_1408e52c0(rax)
int64_t* var_48
sub_141b464f0(rax, &var_48)
sub_140cea1e0()
char rax_2 = sub_140cc1670(&var_48, &data_143e1b870)
int64_t* rbx_1

if (rax_2 != 0)
    rbx_1 = var_48

int64_t result
void* rsi_5

if (rax_2 == 0 || rbx_1 == 0)
    if (sub_140cc16a0(&var_48, sub_140bdfab0()) != 0)
        int64_t* rbx_2 = var_48
        
        if (rbx_2 != 0)
            sub_1413f7120(arg2, rbx_2)
            return sub_141b97710(arg1, rbx_2, arg4)
    
    sub_140cea340()
    
    if (sub_140cc1670(&var_48, &data_143e1b820).b == 0 || var_48 == 0)
        result.b = 0
    else
        void* rax_10 = sub_141b46500(arg2)
        int32_t rsi_6 = sub_1408e52c0(rax_10)
        void var_38
        int64_t** rax_12 = sub_141b464f0(rax_10, &var_38)
        
        if (rax_12[1].b != 0)
            rbx_1 = nullptr
        else
            rbx_1 = *rax_12
        
        if (sub_141b76c40(rbx_1).b == 0)
            result.b = 0
        else
            if (rsi_6 == 0xffffffff)
                rsi_6 = 0
            
            if (*(rbx_1 + 0x3c) != 0x10 || rsi_6 s>= rbx_1[7].d)
                result.b = 0
            else
                result = sx.q(*(rbx_1 + 0x4c)) + arg1
                int64_t rsi_8 = sx.q(rsi_6 << 4)
                rsi_5 = rsi_8 + result
                
                if (rsi_8 == neg.q(result))
                    result.b = 0
                else
                    sub_140a8cee0(arg2, rsi_5)
                    
                    if (arg4 == rsi_5)
                        *arg3 = rbx_1
                        result.b = 1
                    else
                        if (not(test_bit(zx.q(rbx_1[8].d), 0x1e)))
                            goto label_141b742f3
                        
                        memcpy(arg4, rsi_5, *(rbx_1 + 0x3c))
                        result.b = 1
                        *arg3 = rbx_1
else if (rax_1 == 0xffffffff)
    if (sub_141b76c40(rbx_1).b == 0 || *(rbx_1 + 0x3c) != 0x10)
        result.b = 0
    else
        int64_t rsi_4 = sx.q(*(rbx_1 + 0x4c))
        rsi_5 = rsi_4 + arg1
        
        if (rsi_4 == neg.q(arg1))
            result.b = 0
        else
            sub_140a8cee0(arg2, rsi_5)
            
            if (arg4 == rsi_5)
                *arg3 = rbx_1
                result.b = 1
            else if (not(test_bit(zx.q(rbx_1[8].d), 0x1e)))
            label_141b742f3:
                (*(*rbx_1 + 0xb0))(rbx_1, arg4, rsi_5, 1)
                *arg3 = rbx_1
                result.b = 1
            else
                memcpy(arg4, rsi_5, *(rbx_1 + 0x3c))
                result.b = 1
                *arg3 = rbx_1
else
    void* rcx_4 = rbx_1[0xf]
    char rbp_1 = (rbx_1[0x10].d).b
    int64_t* rsi_1 = sx.q(*(rbx_1 + 0x4c)) + arg1
    int32_t r12_1 = *(rcx_4 + 0x3c)
    
    if (rax_1 s< 0 || rax_1 s>= rsi_1[1].d)
        result.b = 0
    else if (sub_141b76c40(rcx_4).b == 0 || *(rbx_1[0xf] + 0x3c) != 0x10 || rsi_1[1].d == 0)
        result.b = 0
    else
        result = *rsi_1
        
        if ((not.b(rbp_1) & 1) == 0 && (result.b & 1) != 0)
            result = (result s>> 1) + rsi_1
        
        int64_t rsi_2 = sx.q(r12_1 * rax_1)
        int64_t rsi_3 = rsi_2 + result
        
        if (rsi_2 == neg.q(result))
            result.b = 0
        else
            sub_140a8cee0(arg2, rsi_3)
            int64_t* rcx_6 = rbx_1[0xf]
            
            if (arg4 == rsi_3)
                *arg3 = rbx_1[0xf]
                result.b = 1
            else if (not(test_bit(zx.q(rcx_6[8].d), 0x1e)))
                (*(*rcx_6 + 0xb0))(rcx_6, arg4, rsi_3, 1)
                *arg3 = rbx_1[0xf]
                result.b = 1
            else
                memcpy(arg4, rsi_3, *(rcx_6 + 0x3c))
                *arg3 = rbx_1[0xf]
                result.b = 1
return result
