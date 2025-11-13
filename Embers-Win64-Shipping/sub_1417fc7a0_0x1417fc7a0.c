// 函数: sub_1417fc7a0
// 地址: 0x1417fc7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint64_t result = zx.q(arg2[1].d)
int32_t rdx = (result - 1).d

if (result.d == 0)
    rdx = 0

if (rdx != 0)
    int64_t* var_78
    
    if (arg3[1].d s> 1)
        int64_t rdi_1 = 0
        void* rsi_1
        
        if (*(arg1 + 0x20) s> 0)
            rsi_1 = arg1 + 0x18
            int64_t r15_1 = 0
            
            while (true)
                int64_t* rbx_2 = *rsi_1 + r15_1
                int16_t* rdx_2
                
                if (arg2[1].d == 0)
                    rdx_2 = &data_142d40450
                else
                    rdx_2 = *arg2
                
                int16_t* const rcx_1
                
                if (rbx_2[1].d == 0)
                    rcx_1 = &data_142d40450
                else
                    rcx_1 = *rbx_2
                
                if (sub_140a54510(rcx_1, rdx_2) == 0)
                    break
                
                if (sub_1417fbf00(arg2, rbx_2) != 0)
                    int32_t r15_2 = *(rsi_1 + 8)
                    *(rsi_1 + 8) = r15_2 + 1
                    
                    if (r15_2 + 1 s> *(rsi_1 + 0xc))
                        sub_1405c4e40(rsi_1)
                    
                    int64_t rbx_4 = sx.q(rdi_1.d) << 5
                    int64_t rdx_6 = *rsi_1 + rbx_4
                    memmove(rdx_6 + 0x20, rdx_6, (r15_2 - rdi_1.d) << 5)
                    int64_t* rbx_5 = rbx_4 + *rsi_1
                    sub_140596d10(rbx_5, arg2)
                    rbx_5[2] = 0
                    rbx_5[3] = 0
                    break
                
                rdi_1 = zx.q(rdi_1.d + 1)
                r15_1 += 0x20
                
                if (rdi_1.d s>= *(arg1 + 0x20))
                    goto label_1417fc8d5
        
        if (*(arg1 + 0x20) s<= 0 || rdi_1.d == 0xffffffff)
        label_1417fc8d5:
            rdi_1 = sx.q(*(arg1 + 0x20))
            rsi_1 = arg1 + 0x18
            int32_t rax_5 = (rdi_1 + 1).d
            *(rsi_1 + 8) = rax_5
            
            if (rax_5 s> *(rsi_1 + 0xc))
                sub_1405c4e40(rsi_1)
            
            int64_t* rbx_8 = (rdi_1 << 5) + *rsi_1
            sub_140596d10(rbx_8, arg2)
            rbx_8[2] = 0
            rbx_8[3] = 0
        
        void* rdi_4 = (sx.q(rdi_1.d) << 5) + *rsi_1
        *(rdi_4 + 0x18) = 0
        
        if (*(rdi_4 + 0x1c) s<= 0xffffffff)
            sub_1405c5660(rdi_4 + 0x10, 0)
        
        var_78 = nullptr
        int32_t var_70_1 = 0
        result = sub_140a2ccb0(arg3, &var_78, U";", 1)
        int64_t* rbx_9 = var_78
        int64_t rsi_2 = sx.q(var_70_1)
        void* r14_3 = &rbx_9[rsi_2 * 2]
        
        if (rbx_9 != r14_3)
            do
                result = sub_140af3620(rbx_9)
                
                if (result.d == 0x20)
                    int32_t var_44_1 = result.d
                    uint32_t count = result.d
                    int32_t rax_6 = rbx_9[1].d
                    int32_t rdx_11 = rax_6 - 1
                    
                    if (rax_6 == 0)
                        rdx_11 = 0
                    
                    int16_t* rcx_11
                    
                    if (rax_6 == 0)
                        rcx_11 = &data_142d40450
                    else
                        rcx_11 = *rbx_9
                    
                    char var_68[0x20]
                    result = sub_140ae4700(rcx_11, rdx_11, &var_68)
                    
                    if (result.b != 0)
                        int64_t rsi_3 = sx.q(*(rdi_4 + 0x18))
                        int32_t rax_7 = (rsi_3 + 1).d
                        *(rdi_4 + 0x18) = rax_7
                        
                        if (rax_7 s> *(rdi_4 + 0x1c))
                            sub_1405c4ec0(rdi_4 + 0x10)
                        
                        result = *(rdi_4 + 0x10)
                        int64_t rcx_13 = rsi_3 * 5
                        *(result + (rcx_13 << 3) + 0x20) = count
                        int64_t rsi_4 = result + (rcx_13 << 3)
                        
                        if (count != 0)
                            sub_1417fc5d0(rsi_4, count, 0)
                            result = memcpy(rsi_4, &var_68, count)
                        else
                            *(rsi_4 + 0x24) = 0x20
                
                rbx_9 = &rbx_9[2]
            while (rbx_9 != r14_3)
            
            rsi_2 = zx.q(var_70_1)
            rbx_9 = var_78
        
        if (rsi_2.d != 0)
            int32_t i
            
            do
                int64_t rcx_16 = *rbx_9
                
                if (rcx_16 != 0)
                    result = sub_140a74f90(rcx_16)
                
                rbx_9 = &rbx_9[2]
                i = rsi_2.d
                rsi_2 = zx.q(rsi_2.d - 1)
            while (i != 1)
            rbx_9 = var_78
        
        if (rbx_9 != 0)
            result = sub_140a74f90(rbx_9)
    else
        var_78 = arg2
        result = sub_1417fae70(arg1 + 0x18, &var_78)

__security_check_cookie(rax_1 ^ &var_98)
return result
