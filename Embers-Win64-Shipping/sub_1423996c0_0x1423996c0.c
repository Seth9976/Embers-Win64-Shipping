// 函数: sub_1423996c0
// 地址: 0x1423996c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection = arg1 + 0x580
EnterCriticalSection(lpCriticalSection)
int64_t rax_1 = sx.q(*(arg1 + 0x1b4)) << 0x14
bool cond:0 = *(arg1 + 0x350) == 0
char rax_2 = *(arg1 + 0x380)
*(arg1 + 0x380) = 1

if (not(cond:0))
    do
        sub_14239c790(arg1, zx.o(0), 0)
    while (*(arg1 + 0x350) != 0)

sub_14238b8b0(*(arg1 + 0x200), 1)
void* rsi = *(arg1 + 0x208)
int64_t* rcx_3 = *(rsi + 0x58)

if (rcx_3 == 0)
    bool z_1
    
    if (0 == *(rsi + 0x48))
        *(rsi + 0x48) = 0
        z_1 = true
    else
        *(rsi + 0x48)
        z_1 = false
    
    if (not(z_1))
        sub_1423ae170(rsi + 8)
        *(rsi + 0x48) -= 1
    
    goto label_14239979d

if ((*(*rcx_3 + 0x18))(rcx_3, rsi) == 0)
label_14239979d:
    
    if (*(rsi + 0x58) != 0)
        int64_t* rcx_7 = *(rsi + 0x50)
        (*(*rcx_7 + 0x20))(rcx_7, 0xffffffff, 0)
        *(rsi + 0x58) = 0
else
    sub_1423ae170(rsi + 8)
    *(rsi + 0x48) -= 1
    int64_t* rcx_5 = *(rsi + 0x50)
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5)
    
    *(rsi + 0x58) = 0

sub_14239bed0(arg1, 0)
int32_t rax_8 = *(arg1 + 0x18)
int32_t rbp = 0
int64_t var_70 = 0
int64_t var_68 = 0

if (rax_8 != 0)
    sub_1405dadb0(&var_70, rax_8)
    rax_8 = *(arg1 + 0x18)
    rbp = var_68.d

int32_t i = 0

if (rax_8 s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t rax_9 = *(arg1 + 0x10)
        
        if (*(rsi_1 + rax_9 + 0xb0) != 0 || *(rsi_1 + rax_9 + 0xc) != 0x1d)
            char rax_10 = (*(rsi_1 + rax_9 + 0xb4)).b
            
            if ((rax_10 & 2) == 0 && (rax_10 & 0x90) != 0x90)
                int64_t r15_1 = sx.q(rbp)
                rbp = (r15_1 + 1).d
                var_68.d = rbp
                
                if (rbp s> var_68:4.d)
                    sub_1405a4cf0(&var_70)
                    rbp = var_68.d
                
                *(var_70 + (r15_1 << 2)) = i
        
        i += 1
        rsi_1 += 0xd8
    while (i s< *(arg1 + 0x18))

void* r15_2 = arg1 + 0x10
int64_t rcx_11 = var_70
void* var_80 = r15_2
sub_14237bd60(rcx_11, rbp, rax_2, &var_80)
int64_t r14 = 0
int64_t r12 = sx.q(rbp - 1)

if (rbp - 1 s>= 0)
    int64_t rbx = 0
    
    while (rbx s< arg2)
        int64_t rcx_12 = sx.q(*(var_70 + (r12 << 2)))
        
        if (rcx_12.d s>= 0 && rcx_12.d s< *(arg1 + 0x18))
            int64_t* rsi_3 = rcx_12 * 0xd8 + *r15_2
            int64_t* rcx_13 = *rsi_3
            
            if (rcx_13 != 0)
                int64_t rdx_5 = sx.q(*(rsi_3 + 0x64))
                int32_t rbp_1 = *(rsi_3 + (sx.q(*(rsi_3 + 0x5c)) << 2) + 0x18)
                int64_t r15_3 = sx.q(*(rsi_3 + (rdx_5 << 2) + 0x18))
                
                if ((*(*rcx_13 + 0x2c8))(rcx_13, rdx_5) != 0)
                    rbx += sx.q(rbp_1 - r15_3.d)
                    r14 += r15_3
                    sub_1423b8300(rsi_3)
                    
                    if (r14 s>= rax_1)
                        void arg_18
                        
                        if (sub_140a80f40() == 0)
                            uint32_t rax_22
                            
                            if (data_143f138f4 == 0 && data_143de5480 != 0)
                                rax_22.b = GetCurrentThreadId() == data_143de5470
                            
                            void arg_20
                            
                            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_22.b == 0))
                                void var_60
                                int64_t* rax_23 = sub_142388fe0(&var_60, nullptr, 0xff)
                                void* rcx_18 = *rax_23
                                int64_t* rbp_3 = *(rcx_18 + 0x18)
                                
                                if (rbp_3 != 0)
                                    rbp_3[9].d += 1
                                
                                sub_1405a5890(rcx_18, rax_23[1], rax_23[2].d, 1)
                                
                                if (rbp_3 != 0)
                                    rbp_3[9].d -= 1
                                    
                                    if (rbp_3[9].d == 1)
                                        sub_140a2f6e0(rbp_3)
                            else
                                sub_1423835c0(&arg_20, &data_143f02b98)
                        else
                            sub_1423835c0(&arg_18, &data_143f02b98)
                        sub_1419a21e0(0)
                        r14 = 0
                
                r15_2 = arg1 + 0x10
        
        int64_t temp1_1 = r12
        r12 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
    
    lpCriticalSection = arg1 + 0x580

int64_t rcx_20 = var_70
*(arg1 + 0x380) = rax_2

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return 1
