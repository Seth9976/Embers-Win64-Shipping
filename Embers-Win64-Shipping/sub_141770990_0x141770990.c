// 函数: sub_141770990
// 地址: 0x141770990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
int64_t r10 = sx.q(arg2)
int64_t rbx_1 = r10 << 4
int64_t* r13_1 = *(arg3 + 0x98) + rbx_1
int64_t rdx = r10 * 0x18
*(rdx + *(rdi + 0x20) + 4) = neg.d(sbb.d(arg1.d, arg1.d, r13_1[1].d != 0)) - 1
int128_t var_78
__builtin_memset(&var_78, 0, 0x28)
int128_t* rax_3 = j_sub_140a82f30(0x10)
void* r10_1 = arg3
var_78.q = rax_3
*rax_3 = zx.o(0)
*var_78.q = &var_78
int64_t rax_5 = *(r10_1 + 0x88)
int64_t* rsi = *(rbx_1 + rax_5)
void* i_2
void* i = i_2
void* r15 = &rsi[sx.q(*(rbx_1 + rax_5 + 8))]
int64_t var_68
void* i_1

if (rsi != r15)
    do
        int64_t* rdi_1 = *rsi
        int32_t arg_10
        sub_140865c40(r10_1 + 0x38, &arg_10, rdi_1)
        int64_t rax_7 = sx.q(arg_10)
        void* const rcx_4
        
        if (rax_7.d == 0xffffffff)
            rcx_4 = nullptr
        else
            rcx_4 = *(r10_1 + 0x38) + rax_7 * 0x18
        
        char rdx_3 = *(rdi_1 + 0xc)
        int32_t* r8_1 = rcx_4 + 8
        int64_t* rax_9 = nullptr
        
        if (rcx_4 == 0)
            r8_1 = nullptr
        
        if (rdx_3 u>= 2)
            rax_9 = rdi_1
        
        if (rax_9 == 0)
        label_141770ae0:
            
            if (r8_1 != 0)
                void* i_4 = i_1
                int64_t rdx_5 = var_68
                int32_t var_84_1 = *r8_1
                
                if (((i + i_4).b & 1) == 0 && rdx_5 u<= (i + 2) u>> 1)
                    sub_141782330(&var_78, 1)
                    i_4 = i_1
                    rdx_5 = var_68
                    i = i_2
                
                void* i_5 = i_4 & ((rdx_5 << 1) + -ffffffffffffffff)
                void* rbx_2 = i + i_5
                i_1 = i_5
                int64_t* rcx_10 = var_78:8.q
                
                if (rcx_10[(rdx_5 - 1) & rbx_2 u>> 1] == 0)
                    var_78:8.q[(rdx_5 - 1) & rbx_2 u>> 1] = j_sub_140a82f30(0x10)
                    rcx_10 = var_78:8.q
                
                *(rcx_10[(rdx_5 - 1) & rbx_2 u>> 1] + ((zx.q(rbx_2.d) & 1) << 3)) = 0.q
                i = i_2 + 1
                i_2 = i
        else
            int64_t* rcx_5 = nullptr
            
            if (rdx_3 u>= 1)
                rcx_5 = rdi_1
            
            if (rcx_5 == 0)
                goto label_141770ae0
            
            int64_t* rax_10 = nullptr
            
            if (*(rcx_5 + 0xc) u>= 2)
                rax_10 = rcx_5
            
            if (rax_10 == 0 || *(sx.q(rax_10[1].d) + *(*rax_10 + 0x398)) != 4)
                goto label_141770ae0
        
        rsi = &rsi[1]
    while (rsi != r15)
    
    rdi = arg1
    r10_1 = arg3

if (i != 0)
    int64_t* r9 = var_78.q
    
    do
        void* r8_2 = nullptr
        
        if (r9 != 0)
            r8_2 = *r9
        
        i -= 1
        int64_t r12_1 =
            *(*(*(r8_2 + 8) + ((i_1 u>> 1 & (*(r8_2 + 0x10) - 1)) << 3)) + ((zx.q(i_1.d) & 1) << 3))
        void* i_3 = i
        uint32_t r14_3 = (r12_1 u>> 0x20).d
        
        if (i != 0)
            i_1 += 1
        else
            i_1 = i
        
        int64_t* rax_27 = (sx.q(r14_3) << 5) + *(r10_1 + 8)
        int32_t* rsi_1 = *rax_27
        void* r15_1 = &rsi_1[sx.q(rax_27[1].d)]
        
        if (rsi_1 != r15_1)
            do
                int64_t r8_3 = sx.q(*rsi_1)
                int32_t* r10_2 = *(r10_1 + 0x18) + r8_3 * 0x18
                
                if (r10_2[2] == arg4)
                    int64_t rax_31 = *(rdi + 0x10)
                    void* r9_1 = rax_31 + (r8_3 << 3)
                    
                    if (*(rax_31 + (r8_3 << 3) + 4) s< 0)
                        for (int32_t* j = *r13_1; j != &j[sx.q(r13_1[1].d)]; j = &j[1])
                            if (*j == r8_3.d)
                                int32_t rcx_18 = r12_1.d
                                *(r9_1 + 4) = r12_1.d
                                int64_t rax_32 = *(rdi + 0x20)
                                
                                if (*(rdx + rax_32 + 4) s>= r12_1.d)
                                    rcx_18 = *(rdx + rax_32 + 4)
                                
                                *(rdx + rax_32 + 4) = rcx_18
                                int32_t rcx_19 = -1
                                int32_t rdx_10 = *r10_2
                                
                                if (rdx_10 == r14_3)
                                    rcx_19 = r10_2[1]
                                
                                if (r10_2[1] != r14_3)
                                    rdx_10 = rcx_19
                                
                                if (rdx_10 == 0xffffffff)
                                    i = i_3
                                else
                                    void* i_8 = i_3
                                    int32_t rax_34 = *(r9_1 + 4) + 1
                                    int64_t rcx_20 = var_68
                                    int32_t var_84_2 = rdx_10
                                    void* i_6 = i_1
                                    
                                    if (((i_8 + i_6).b & 1) == 0 && rcx_20 u<= (i_8 + 2) u>> 1)
                                        sub_141782330(&var_78, 1)
                                        i_8 = i_3
                                        i_6 = i_1
                                        rcx_20 = var_68
                                    
                                    void* i_7 = i_6 & ((rcx_20 << 1) + -ffffffffffffffff)
                                    i_1 = i_7
                                    void* rbx_5 = i_7 + i_8
                                    int64_t* rcx_24 = var_78:8.q
                                    
                                    if (rcx_24[(rcx_20 - 1) & rbx_5 u>> 1] == 0)
                                        var_78:8.q[(rcx_20 - 1) & rbx_5 u>> 1] =
                                            j_sub_140a82f30(0x10)
                                        rcx_24 = var_78:8.q
                                    
                                    *(rcx_24[(rcx_20 - 1) & rbx_5 u>> 1]
                                        + ((zx.q(rbx_5.d) & 1) << 3)) = rax_34.q
                                    i = i_3 + 1
                                    i_3 = i
                                
                                break
                
                rdi = arg1
                rsi_1 = &rsi_1[1]
                r10_1 = arg3
            while (rsi_1 != r15_1)
            
            r9 = var_78.q
        
        rdi = arg1
    while (i != 0)

int64_t r8_4 = 0
int32_t* rdx_11 = *r13_1
uint64_t r9_3 = sx.q(r13_1[1].d) << 2 u>> 2

if (rdx_11 u> &rdx_11[r13_1[1]])
    r9_3 = 0

if (r9_3 != 0)
    do
        int64_t rcx_27 = sx.q(*rdx_11)
        int64_t rax_45 = *(arg1 + 0x10)
        
        if (*(rax_45 + (rcx_27 << 3) + 4) s< 0)
            *(rax_45 + (rcx_27 << 3) + 4) = 0
        
        rdx_11 = &rdx_11[1]
        r8_4 += 1
    while (r8_4 != r9_3)

return sub_141762560(&var_78)
