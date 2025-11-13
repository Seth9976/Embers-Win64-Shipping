// 函数: sub_140750570
// 地址: 0x140750570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*(arg1 + 0x3b) &= 0xfb
void* rdi = arg1
int64_t r15 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t var_3c = 8
sub_140773c90(arg1)
int32_t rax_3 = *(*(rdi + 0x108) + 8)
void* rax_4 = *(arg2 + 0x528)
int64_t* rbx_1 = *(rax_4 + 0xa0)
void* r14_2 = &rbx_1[sx.q(*(rax_4 + 0xa8)) * 2]
int64_t* var_a8 = rbx_1
void* var_b0 = r14_2
void var_88

while (rbx_1 != r14_2)
    int64_t* rsi_2 = rbx_1[1]
    void* r13_1 = *rbx_1
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    void* rcx = *(r13_1 + 0x788)
    
    if (rcx != 0)
        int64_t* var_a0
        sub_1407efa00(rcx, &var_a0)
        int64_t* r14_3 = var_a0
        int64_t r12_1 = 0
        int32_t var_98
        void* rcx_1 = &r14_3[sx.q(var_98)]
        uint64_t rax_9 = (rcx_1 - r14_3 + 7) u>> 3
        
        if (r14_3 u> rcx_1)
            rax_9 = 0
        
        if (rax_9 != 0)
            void* rbx_2 = rdi + 0x178
            
            do
                int32_t rax_10 = *(rdi + 0x180)
                int64_t rdi_1 = sx.q(var_40)
                int64_t* r15_1 = *r14_3
                int32_t rax_11 = (rdi_1 + 1).d
                var_40 = rax_11
                
                if (rax_11 s> var_3c)
                    sub_1407757f0(&var_88, rdi_1.d)
                
                void* rcx_3 = &var_88
                
                if (var_48 != 0)
                    rcx_3 = var_48
                
                void* rcx_4 = rcx_3 + (rdi_1 << 3)
                *rcx_4 = r15_1[5].d
                *(rcx_4 + 4) = rax_10
                int32_t var_d0_1
                var_d0_1.q = 0
                
                if ((*(*r15_1 + 0x288))(r15_1) != 0 && *(*(r13_1 + 0x778) + 0xcc) != 0
                        && *(r13_1 + 0x24) != 4)
                    var_d0_1.q = (*(*r15_1 + 0x260))(r15_1, zx.q(rax_3), r13_1)
                    char rcx_7 = *(arg1 + 0x3b)
                    *(arg1 + 0x3b) = (((*(r15_1 + 0x2d) << 2 | rcx_7) ^ rcx_7) & 4) ^ rcx_7
                
                int64_t rdi_2 = sx.q(*(rbx_2 + 8))
                int32_t rax_21 = (rdi_2 + 1).d
                *(rbx_2 + 8) = rax_21
                
                if (rax_21 s> *(rbx_2 + 0xc))
                    sub_1405a4d70(rbx_2)
                
                r14_3 = &r14_3[1]
                r12_1 += 1
                *(*rbx_2 + (rdi_2 << 3)) = var_d0_1.q
                rdi = arg1
            while (r12_1 != rax_9)
            
            r14_3 = var_a0
            r15 = 0
            rbx_1 = var_a8
        
        if (r14_3 != 0)
            sub_140a74f90(r14_3)
        
        r14_2 = var_b0
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t rax_25 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (rax_25 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)
    
    rbx_1 = &rbx_1[2]
    var_a8 = rbx_1

void* rcx_12 = &var_88
char var_d8 = 0

if (var_48 != 0)
    rcx_12 = var_48

sub_14073e070(rcx_12, var_40, 0)
*(rdi + 0x190) = 0
int32_t rax_28 = var_40

if (rax_28 s> *(rdi + 0x194))
    sub_1405dadb0(rdi + 0x188, rax_28)
    rax_28 = var_40

void* rcx_16 = var_48
void* rsi_3 = &var_88

if (rcx_16 != 0)
    rsi_3 = rcx_16

int64_t r14_4 = sx.q(rax_28) << 3
void* result = r14_4 + rsi_3
uint64_t r14_5 = r14_4 u>> 3

if (rsi_3 u> result)
    r14_5 = 0

if (r14_5 != 0)
    do
        int64_t rax_30 = *rsi_3
        int64_t rdi_3 = sx.q(*(rdi + 0x190))
        int32_t rax_31 = (rdi_3 + 1).d
        *(rdi + 0x190) = rax_31
        
        if (rax_31 s> *(rdi + 0x194))
            sub_1405a4cf0(rdi + 0x188)
        
        rsi_3 += 8
        result = zx.q(rax_30:4.d)
        r15 += 1
        *(*(rdi + 0x188) + (rdi_3 << 2)) = result.d
    while (r15 != r14_5)
    
    rcx_16 = var_48

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

__security_check_cookie(rax_1 ^ &var_f8)
return result
