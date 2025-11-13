// 函数: sub_140cbaea0
// 地址: 0x140cbaea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_878
int64_t rax_1 = __security_cookie ^ &var_878
*arg1 = 0
int16_t* r14 = arg2
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 0
arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_140638c50(&arg1[2], 0)

int64_t* rdi = nullptr
int64_t* var_858 = nullptr
int32_t rsi = 0
int32_t var_84c = 0
int32_t rbp = 0
int64_t rdx = 0

while (true)
    int16_t rcx_3 = *r14
    int16_t var_838[0x400]
    
    if (rcx_3 u> 0x3a || not(test_bit(0x400400000000001, zx.q(rcx_3))))
        var_838[rdx] = rcx_3
        rdx += 1
    else
        if (rdx * 2 u>= 0x800)
            __report_rangecheckfailure()
            noreturn
        
        var_838[rdx] = 0
        
        if (rdx s> 0)
            int64_t var_848
            sub_140b58260(&var_848, &var_838, 1)
            int64_t rbx_1 = sx.q(rsi)
            rsi = (rbx_1 + 1).d
            
            if (rsi s> rbp)
                sub_1405a4d70(&var_858)
                rbp = var_84c
                rdi = var_858
            
            rdi[rbx_1] = var_848
            rdx = 0
            rcx_3 = *r14
        
        if (rcx_3 == 0)
            if (rsi s> 1)
                int32_t r8_1 = rsi - 1
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rsi)
                int32_t i_2 = (temp1_1 - temp0_1) s>> 1
                
                if (i_2 s> 0)
                    int64_t* rcx_4 = rdi
                    uint64_t i_1 = zx.q(i_2)
                    uint64_t i
                    
                    do
                        int64_t* rdx_4 = &rdi[sx.q(r8_1)]
                        
                        if (rcx_4 != rdx_4)
                            int64_t zmm1 = *rcx_4
                            *rcx_4 = *rdx_4
                            *rdx_4 = zmm1
                        
                        rcx_4 = &rcx_4[1]
                        r8_1 -= 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
            else if (rsi == 1)
                int32_t rcx_5
                rcx_5.b = *(rdi + 4) == 0
                
                if ((rcx_5.b & sub_140b5b8a0(*rdi, 0)) != 0)
                    int32_t var_850_2 = 0
                    rsi = 0
                    
                    if (rbp != 0)
                        sub_140638c50(&var_858, 0)
                        rbp = var_84c
                        rsi = var_850_2
                        rdi = var_858
            
            if (&arg1[2] != &var_858)
                int64_t rcx_7 = arg1[2]
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                arg1[2] = rdi
                rdi = nullptr
                arg1[3].d = rsi
                *(arg1 + 0x1c) = rbp
            
            sub_140ccfa10()
            void* result = sub_140cd0630(arg1, nullptr, 0)
            
            if (result != 0 && (data_1439a9d98 & *(*(result + 8) + 0x10)) != 0)
                *arg1 = result
            else if (*arg1 != 0)
                arg1[1].d = 0xffffffff
                *(arg1 + 0xc) = 0
                *arg1 = 0
            
            if (rdi != 0)
                result = sub_140a74f90(rdi)
            
            __security_check_cookie(rax_1 ^ &var_878)
            return result
    r14 = &r14[1]
