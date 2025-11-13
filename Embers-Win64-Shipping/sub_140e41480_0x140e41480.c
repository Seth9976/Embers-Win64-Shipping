// 函数: sub_140e41480
// 地址: 0x140e41480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_598
int64_t var_48 = __security_cookie ^ &var_598
int64_t rbp = sx.q(arg2)
int64_t rax_1
rax_1.b = *(arg1 + rbp + 0x11c) != 0
int32_t rbx = 0
*arg3 = rax_1.b
int64_t r11 = 0
char* r9_1 = *(arg1 + (rbp << 3) + 0x128) + 1
char var_158

for (int32_t i = 1; i s<= 0x10; )
    uint64_t r10_1 = zx.q(*r9_1)
    
    if (r10_1.b u>= 1)
        rbx += r10_1.d
        int64_t rcx_1
        int64_t rdi_2
        rdi_2, rcx_1 = __memfill_u8(&(&var_158)[r11], i.b, zx.q(r10_1.d))
        r11 += r10_1
    
    i += 1
    r9_1 = &r9_1[1]

int64_t rbx_1 = sx.q(rbx)
int64_t var_578 = rbx_1

if (rbx_1 u>= 0x101)
    __report_rangecheckfailure()
    noreturn

(&var_158)[rbx_1] = 0
int32_t rdx = 0
uint32_t rax_3 = zx.d(var_158)
uint32_t rdi_3 = rax_3
int32_t var_568[0x104]

if (rax_3.b != 0)
    int64_t rcx_2 = 0
    
    do
        if (zx.d(rax_3.b) == rdi_3)
            uint32_t rax_5
            
            do
                char var_157[0x10f]
                rax_5 = zx.d(var_157[rcx_2])
                var_568[rcx_2] = rdx
                rcx_2 += 1
                rdx += 1
            while (rax_5 == rdi_3)
        
        rax_3 = zx.d((&var_158)[rcx_2])
        rdx *= 2
        rdi_3 += 1
    while (rax_3.b != 0)

memset(&arg3[4], 0, 0x800)
memset(&arg3[0x904], 0, 0x800)
int64_t* result = memset(&arg3[0x804], 0, 0x100)
int32_t r8 = -1

if (rbx_1 s> 0)
    result = arg1 + ((rbp + 0x2d) << 3)
    int64_t* result_1 = result
    int64_t r13_1 = 0
    
    do
        uint32_t rsi_1 = zx.d((&var_158)[r13_1])
        uint64_t rdi_4 = zx.q(var_568[r13_1])
        uint64_t rbp_1 = zx.q(*(*result + r13_1))
        arg3[rbp_1 + 0x804] = rsi_1.b
        
        if (rsi_1 u> 8)
            uint64_t rax_14 = zx.q((rdi_4 u>> (rsi_1.b - 8)).b)
            int32_t rdx_7 = *(arg3 + (rax_14 << 2) + 4)
            
            if (rdx_7 == 0)
                *(arg3 + (rax_14 << 2) + 4) = r8
                rdx_7 = r8
                *(arg3 + (rax_14 << 2) + 0x404) = r8
                r8 -= 2
            
            int32_t rdi_6 = rdi_4.d << (0x18 - rsi_1.b)
            
            if (rsi_1 u> 9)
                uint64_t i_3 = zx.q(rsi_1 - 9)
                uint64_t i_1
                
                do
                    int32_t rax_15 = rdx_7 - 1
                    
                    if (test_bit(rdi_6, 0xf))
                        rax_15 = rdx_7
                    
                    int64_t rax_17 = sx.q(not.d(rax_15))
                    rdx_7 = *(arg3 + (rax_17 << 2) + 0x904)
                    
                    if (rdx_7 == 0)
                        *(arg3 + (rax_17 << 2) + 0x904) = r8
                        rdx_7 = r8
                        r8 -= 2
                    
                    rdi_6 *= 2
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            int32_t rax_18 = rdx_7 - 1
            
            if (test_bit(rdi_6, 0xf))
                rax_18 = rdx_7
            
            *(arg3 + (sx.q(not.d(rax_18)) << 2) + 0x904) = rbp_1.d
        else
            uint64_t rdi_5 = zx.q(rdi_4.d << (8 - rsi_1.b))
            int32_t i_2 = 1 << (8 - rsi_1.b)
            
            if (i_2 s> 0)
                int32_t r15_2 = rbp_1.d & 0xf
                
                do
                    rbx_1.b = 0
                    *(arg3 + (rdi_5 << 2) + 4) = rbp_1.d
                    int32_t rdx_1 = 0
                    uint32_t rax_8 = rsi_1
                    
                    if (r15_2 != 0)
                        uint32_t r9_2 = r15_2 + rsi_1
                        
                        if (r9_2 u<= 8)
                            rbx_1.b = 1
                            rdx_1 = rdi_5.d u>> (8 - r9_2.b) & (zx.d(rol.w(1, rbp_1.b)) - 1)
                            rax_8 = r9_2
                    
                    if (rbx_1.b != 0)
                        rax_8 = rax_8 | rdx_1 << 8 | 0x80
                    
                    i_2 -= 1
                    *(arg3 + (rdi_5 << 2) + 0x404) = rax_8 << 8 | rbp_1.d
                    rdi_5 = zx.q(rdi_5.d + 1)
                while (i_2 s> 0)
                
                rbx_1 = var_578
        
        result = result_1
        r13_1 += 1
    while (r13_1 s< rbx_1)

__security_check_cookie(var_48 ^ &var_598)
return result
