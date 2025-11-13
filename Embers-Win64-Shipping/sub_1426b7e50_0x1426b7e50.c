// 函数: sub_1426b7e50
// 地址: 0x1426b7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg2
int64_t r15 = sx.q(arg3)
char* r12_1 = zx.q(*(arg1 + 0x52)) + *(zx.q(*(r9 + 0x260)) * 0x58 + *(r9 + 0x110) + 0x30)
int64_t rsi_1 = r15 * 0x30
int64_t** r13_1 = arg1[0xb] + rsi_1
uint64_t result

if ((arg1[0x11].b & 0x10) != 0)
    result = (*(*arg1 + 0x2d8))(arg4, arg5, zx.q(r15.d))

if ((arg1[0x11].b & 0x10) == 0 || result.b != 0)
    result = arg1[0xb]
    int64_t rbp_1 = rsi_1 + result
    int32_t i = 0
    
    if (*(rbp_1 + 0x18) s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t* rbx_2 = *(r14_1 + *(rbp_1 + 0x10))
            
            if ((rbx_2[0xc].b & 8) != 0)
                int64_t* rcx = rbx_2
                
                if ((*(rbx_2 + 0x55) & 4) != 0)
                    rcx = sub_1426b2a30(rcx, arg2)
                
                if (rcx != 0)
                    (*(*rcx + 0x2c8))(rcx, arg2)
            
            result = zx.q(*(rbx_2 + 0x64))
            
            if (result.b == 1)
                char var_36_2 = 2
            label_1426b7f2e:
                void* rax_5 = *arg2
                char var_35 = var_35 & 0xfe
                int64_t* var_48 = rbx_2
                int64_t var_40_1 = 0
                int16_t var_38_1 = *(rax_5 + 0x260)
                result = sub_1426a96e0(arg2, &var_48)
            else if (result.b u> 1 && result.b u<= 3)
                char var_36_1 = 1
                goto label_1426b7f2e
            
            i += 1
            r14_1 = &r14_1[1]
        while (i s< *(rbp_1 + 0x18))

int64_t* rcx_3 = *r13_1

if (rcx_3 != 0)
    result = sub_1426b85d0(rcx_3, arg2)

*r12_1 = r15.b
return result
