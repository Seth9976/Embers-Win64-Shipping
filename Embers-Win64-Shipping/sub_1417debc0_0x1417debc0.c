// 函数: sub_1417debc0
// 地址: 0x1417debc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rdi = data_143ef8a58
void* rdx = data_143ef8a50

if (rdi != 0)
    *(rdi + 0xc) += 1

int64_t result = 0

if (rdx != 0 && rdi != 0)
    int32_t rax_2 = 0
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
    else
        rax_2 = rdi[1].d
    
    if (rax_2 s> 0)
        int32_t rax_3 = 0
        void* r13_1 = nullptr
        int64_t* r14_1 = rdi
        bool z_1
        
        if (0 == rdi[1].d)
            rdi[1].d = 0
            z_1 = true
        else
            rax_3 = rdi[1].d
            z_1 = false
        
        if (z_1)
        label_1417dec77:
            r14_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (rax_3 == rdi[1].d)
                    rdi[1].d = rax_3 + 1
                    z_2 = true
                else
                    rdi[1].d
                    z_2 = false
                
                if (z_2)
                    r13_1 = rdx
                    break
                
                rax_3 = 0
                bool z_3
                
                if (0 == rdi[1].d)
                    rdi[1].d = 0
                    z_3 = true
                else
                    rax_3 = rdi[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_1417dec77
        
        int64_t* rbp_1 = *(r13_1 + 0x50)
        
        if (rbp_1 != 0)
            int64_t rsi = *(arg2 + 0x40)
            int64_t rbp_2 = *rbp_1
            float var_78[0x3][0x4]
            float (* rax_5)[0x4] = sub_1417db080(arg2, &var_78)
            result = (*(rbp_2 + 0x80))(*(r13_1 + 0x50), arg1, rax_5, rsi, arg3)
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t rax_9 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)

if (rdi != 0)
    int32_t r15_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (r15_1 == 1)
        int64_t r8_2 = *rdi
        (*(r8_2 + 8))(rdi, zx.q(r15_1), r8_2)

__security_check_cookie(rax_1 ^ &var_b8)
return result
