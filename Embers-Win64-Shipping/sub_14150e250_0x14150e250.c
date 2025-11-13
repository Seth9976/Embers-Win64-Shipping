// 函数: sub_14150e250
// 地址: 0x14150e250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg3
int32_t* r12 = arg2
int128_t* r13 = arg1
int64_t r15
int64_t var_40 = r15

if (*(arg1 + 8) != 0)
    int64_t* var_98 = nullptr
    int32_t var_90_1 = 0
    sub_1415077b0(&arg2[0x72], r9, &var_98)
    int64_t* rcx_1 = var_98
    int64_t* r13_1 = rcx_1
    void* rax_2 = &rcx_1[sx.q(var_90_1)]
    
    if (rcx_1 != rax_2)
        do
            int32_t* r10_1 = arg2
            int64_t rdx_1 = sx.q(r10_1[0x70])
            
            if (rdx_1.d != 0)
                int32_t r12_1 = 0
                int32_t rdi_1 = 0
                int64_t rbx_1 = 0
                r15.b = **(r10_1 + 0x1b8) != *r13_1
                
                do
                    int64_t r9_1 = sx.q(rdi_1)
                    rbx_1 += 1
                    rdi_1 += 1
                    
                    if (rbx_1 s< rdx_1)
                        int64_t rcx_3 = *(r10_1 + 0x1b8) + (rbx_1 << 3)
                        
                        do
                            int32_t rax_5
                            rax_5.b = *rcx_3 != *r13_1
                            
                            if (zx.d(r15.b) != rax_5)
                                break
                            
                            rdi_1 += 1
                            rbx_1 += 1
                            rcx_3 += 8
                        while (rbx_1 s< rdx_1)
                    
                    int32_t rsi_2 = rdi_1 - r9_1.d
                    
                    if (r15.b != 0)
                        if (r12_1 != r9_1.d)
                            int64_t rcx_4 = *(r10_1 + 0x1b8)
                            memmove(rcx_4 + (sx.q(r12_1) << 3), rcx_4 + (r9_1 << 3), rsi_2 << 3)
                            r10_1 = arg2
                        
                        r12_1 += rsi_2
                    
                    r15.b ^= 1
                while (rbx_1 s< rdx_1)
                
                r10_1[0x70] = r12_1
            
            sub_14151bf40(arg3, arg1, r13_1, *r10_1)
            r13_1 = &r13_1[1]
        while (r13_1 != rax_2)
        
        r12 = arg2
        rcx_1 = var_98
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    r9 = arg3
    r13 = arg1

int32_t i = 0

if (*(r13 + 0x2f) u> 0)
    do
        int32_t j = 0
        void** r15_1 = sx.q(i) << 3
        void* rsi_3 = *(r15_1 + *(r13 + 0x38))
        
        if (*(rsi_3 + 0xb0) u> 0)
            do
                if (*(*(rsi_3 + 0x90) + (sx.q(j) << 3)) == *r9)
                    uint64_t rbx_2 = zx.q(j.w)
                    sub_14151c0b0(rsi_3 + 0x20, r12, rbx_2.w, 0)
                    *(*(rsi_3 + 0x60) + (rbx_2 << 2)) = 0
                    int16_t rdx_7 = *(*(rsi_3 + 0x68) + (rbx_2 << 1))
                    
                    if (rdx_7 == 0 || *(*(rsi_3 + 0x60) + (
                            zx.q(*(*(rsi_3 + 0x58) + (zx.q(((zx.d(rdx_7) - 1) s>> 1).w) << 1)))
                            << 2)) u<= 0)
                        sub_141505070(rsi_3 + 0x48, rdx_7)
                    else
                        sub_14151c590(rsi_3 + 0x48, rdx_7)
                    
                    r9 = arg3
                
                j += 1
            while (j u< *(rsi_3 + 0xb0))
        
        int64_t rax_17 = *(r13 + 0x38)
        void* rcx_10 = *(r15_1 + rax_17)
        *(r15_1 + rax_17) = 0
        
        if (rcx_10 != 0)
            *(rcx_10 + 0x1bc) -= 1
        
        i += 1
    while (i u< zx.d(*(r13 + 0x2f)))

int32_t rdx_10 = *(r13 + 0x44)
int64_t* rax_19 = *(r13 + 0x38)
int32_t i_3 = r13[4].d

if (rdx_10 s< 0)
    if (i_3 != 0)
        int32_t i_1
        
        do
            void* rdx_9 = *rax_19
            
            if (rdx_9 != 0)
                *(rdx_9 + 0x1bc) -= 1
            
            rax_19 = &rax_19[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rdx_10 = *(r13 + 0x44)
    
    r13[4].d = 0
    
    if (rdx_10 != 0)
        sub_1405c5570(r13 + 0x38, 0)
else
    if (i_3 != 0)
        int32_t i_2
        
        do
            void* rdx_8 = *rax_19
            
            if (rdx_8 != 0)
                *(rdx_8 + 0x1bc) -= 1
            
            rax_19 = &rax_19[1]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    r13[4].d = 0

int64_t* rcx_12 = *(r13 + 0x48)

if (rcx_12 != 0)
    (**rcx_12)(rcx_12, 1)

int64_t var_7c
__builtin_memset(&var_7c, 0, 0x14)
char var_5a = 0
int32_t var_80 = 1
uint128_t zmm1 = var_7c:4.o
int32_t var_68 = 0x10001
*r13 = 0.o
int64_t var_64 = 0
r13[1] = zmm1
int32_t var_5c = 0
r13[2] = var_68.o
*(r13 + 0x48) = 0
r13[3].q = 0
return 0
