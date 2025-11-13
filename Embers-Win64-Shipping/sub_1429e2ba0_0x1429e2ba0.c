// 函数: sub_1429e2ba0
// 地址: 0x1429e2ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x18a0)
void var_18d8
int64_t rax_1 = __security_cookie ^ &var_18d8
int64_t var_1860 = arg3
int32_t rdx = 1 << (*(arg1 + 0x47ac)).b
int32_t count_1 = (*(arg1 + 0x5d4) + 7) & 0xfffffff8
int32_t i_5 = 1 << (arg1[0x47b].d).b
void** var_1868 = &data_143cc7018
int32_t i_6 = i_5

if (*(arg1 + 0x1328) != 0)
    if (*(arg1 + 0x47b8) == 0 && *(arg1 + 0x4848) == 0)
        void* rax_2
        int64_t r9_1
        rax_2, r9_1 = sub_1429ddec0(0x20, 0x1a0)
        *(arg1 + 0x4848) = rax_2
        
        if (rax_2 == 0)
            sub_1429da010(&arg1[0x27], (rax_2 + 2).d, "Failed to allocate pbi->lf_worker.data1", 
                r9_1)
        
        arg1[0x484].q = sub_142a26e40
        
        if (*(arg1 + 0x4eb8) s> 1)
            int32_t rax_3
            int64_t r9_2
            rax_3, r9_2 = data_143cc7020(&arg1[0x483])
            
            if (rax_3 == 0)
                sub_1429da010(&arg1[0x27], rax_3 + 1, "Loop filter thread creation failed", r9_2)
    
    if (*(arg1 + 0x1328) != 0 && *(arg1 + 0x47b8) == 0)
        int64_t* rbx_1 = *(arg1 + 0x4848)
        data_143cc7028(&arg1[0x483])
        sub_142a26ba0(rbx_1, *(arg1 + 0x47e8) + 0x70 + sx.q(arg1[0x5a].d) * 0xd0, &arg1[0x27], arg1)

int64_t count = sx.q(count_1)
memset(*(arg1 + 0x47f8), 0, count * 6)
memset(arg1[0x47f].q, 0, count)
sub_142a26e80(&arg1[0x27])
int32_t rdi_2 = rdx
void var_1848
sub_1429e39e0(arg1, arg2, arg3, rdi_2, i_5, &var_1848)
int32_t r12 = 0
int64_t i_3 = sx.q(i_5)
int64_t i_4 = i_3
int32_t var_1890 = 0
int32_t var_18b8

if (i_5 s> 0)
    int32_t rax_5 = 0
    void* rdx_7 = &var_1848
    int32_t var_18a0_1 = 0
    void* var_1878_1 = &var_1848
    int64_t i
    
    do
        int32_t r14_1 = 0
        int32_t var_18a4_1 = 0
        
        if (rdi_2 s> 0)
            void* r8_5 = arg1 + 0x13ec
            int64_t rcx_12 = sx.q(rax_5) * 0x3fd0
            void* rdi_3 = rdx_7
            void* var_1898_1 = rdx_7
            int64_t var_1880_1 = rcx_12
            
            while (true)
                int128_t* rax_7 = arg1
                void* r15_2 = *(arg1 + 0x4868) + rcx_12
                int64_t j_2 = 4
                int128_t* rcx_13 = r15_2 + 0x3400
                int64_t j
                
                do
                    rcx_13 = &rcx_13[8]
                    int128_t zmm0_1 = *rax_7
                    rax_7 = &rax_7[8]
                    rcx_13[-8] = zmm0_1
                    rcx_13[-7] = rax_7[-7]
                    rcx_13[-6] = rax_7[-6]
                    rcx_13[-5] = rax_7[-5]
                    rcx_13[-4] = rax_7[-4]
                    rcx_13[-3] = rax_7[-3]
                    rcx_13[-2] = rax_7[-2]
                    rcx_13[-1] = rax_7[-1]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                *rcx_13 = *rax_7
                rcx_13[1] = rax_7[1]
                rcx_13[2] = rax_7[2]
                rcx_13[3] = rax_7[3]
                rcx_13[4] = rax_7[4]
                rcx_13[5] = rax_7[5]
                rcx_13[6].q = rax_7[6].q
                void* rax_9 = nullptr
                *(r15_2 + 0x365c) = j_2.d
                
                if (*(arg1 + 0x47a8) == 0)
                    rax_9 = r8_5
                
                *(r15_2 + 0x3588) = rax_9
                memset(r15_2 + 0x3670, j_2.d, 0x800)
                uint64_t r9_5 = zx.q(r14_1)
                sub_142a24fe0(r15_2 + 0x3590, &arg1[0x27], r12, r9_5.d)
                int64_t rdi_4 = *(rdi_3 + 8)
                int64_t r12_1 = arg1[0x4eb].q
                int64_t r13 = *(arg1 + 0x4ea8)
                int64_t r14_3 = *var_1898_1
                
                if (rdi_4 == 0 || rdi_4 u> var_1860 - r14_3)
                    sub_1429da010(&arg1[0x27], 7, "Truncated packet or corrupt tile length", r9_5)
                
                var_18b8.q = r12_1
                
                if (sub_142a23290(r15_2 + 0x10, r14_3, rdi_4, r13, var_18b8) != 0)
                    sub_1429da010(&arg1[0x27], 2, "Failed to allocate bool decoder %d", 1)
                
                void* rdx_10 = r15_2 + 0x3450
                int32_t j_1 = 0
                void* r10_1 = r15_2 + 0x3600
                int64_t r9_7 = 0
                
                do
                    *(rdx_10 - 0x50) = r15_2 + 0x3670
                    *r10_1 = *(arg1 + 0x47f8)
                        + (((sx.q(*(arg1 + 0x5d4) + 7) & 0xfffffffffffffff8) * r9_7) << 1)
                    int128_t zmm1
                    
                    if (j_1 s> 0)
                        *rdx_10 = arg1[0x61]
                        zmm1 = arg1[0x62]
                    else
                        *rdx_10 = arg1[0x5f]
                        zmm1 = arg1[0x60]
                    
                    *(rdx_10 + 0x10) = zmm1
                    rdx_10 -= -0x80
                    j_1 += 1
                    *(r15_2 + 0x35e0) = *(arg1 + 0x13d8)
                    r9_7 += 1
                    r10_1 += 8
                while (j_1 s< 3)
                
                *(r15_2 + 0x3648) = arg1[0x47f].q
                *(r15_2 + 0x35a0) = *(arg1 + 0x5d8)
                *(r15_2 + 0x3660) = &arg1[0x27]
                void* const rax_21
                
                if (*(arg1 + 0x5a8) == 0 || *(arg1 + 0x5b8) != 0)
                    rax_21 = &data_143603228
                else
                    rax_21 = *(arg1 + 0x13d8) + 0x7e
                
                r8_5 = arg1 + 0x13ec
                r14_1 = var_18a4_1 + 1
                var_1898_1 += 0x18
                rcx_12 = var_1880_1 + 0x3fd0
                rdi_2 = rdx
                r12 = var_1890
                *(r15_2 + 0x35c8) = rax_21
                var_18a4_1 = r14_1
                var_1880_1 = rcx_12
                
                if (r14_1 s>= rdi_2)
                    break
                
                rdi_3 = var_1898_1
            
            rax_5 = var_18a0_1
            rdx_7 = var_1878_1
            i_3 = i_4
        
        r12 += 1
        rax_5 += rdi_2
        rdx_7 += 0x600
        var_1890 = r12
        i = i_3
        i_3 -= 1
        var_18a0_1 = rax_5
        i_4 = i_3
        var_1878_1 = rdx_7
    while (i != 1)
    i_5 = i_6

int32_t rax_22 = 0
int32_t var_18a4_2 = 0

if (i_5 s> 0)
    int64_t r13_1 = sx.q(rdi_2)
    int64_t rbx_3 = 0
    int64_t var_1888_2 = r13_1
    int64_t var_1898_2 = 0
    
    do
        sub_142a25110(&var_1860, &arg1[0x27], rax_22)
        uint64_t r14_5 = zx.q(var_1860.d)
        
        while (r14_5.d s< var_1860:4.d)
            int32_t r15_3 = 0
            int64_t r12_2 = 0
            
            if (rdi_2 s> 0)
                int32_t rax_23 = rdi_2 - 1
                int64_t r13_2 = r13_1 - 1
                int32_t var_18a0_2 = rax_23
                
                do
                    int64_t rax_24
                    int32_t r8_9
                    
                    if (*(arg1 + 0x4ebc) == 0)
                        r8_9 = r15_3
                        rax_24 = r12_2
                    else
                        r8_9 = rax_23
                        rax_24 = r13_2
                    
                    void* rdi_6 = (rax_24 + rbx_3) * 0x3fd0 + *(arg1 + 0x4868)
                    int64_t r9_8 = sub_142a250a0(&var_1860, &arg1[0x27], r8_9)
                    __builtin_memset(rdi_6 + 0x3618, 0, 0x30)
                    *(rdi_6 + 0x3650) = 0
                    int32_t i_2
                    int32_t var_1854
                    
                    for (int32_t i_1 = i_2; i_1 s< var_1854; i_1 += 8)
                        void* var_18b0
                        var_18b0.d = 4
                        var_18b8.b = 0xc
                        r9_8 = sub_1429e2860(rdi_6, arg1, r14_5.d, i_1, var_18b8.b, var_18b0.d)
                    
                    int32_t temp2_1 = *(arg1 + 0x25c) | *(rdi_6 + 0x365c)
                    *(arg1 + 0x25c) = temp2_1
                    
                    if (temp2_1 != 0)
                        sub_1429da010(&arg1[0x27], 7, "Failed to decode tile data", r9_8)
                    
                    r15_3 += 1
                    rbx_3 = var_1898_2
                    rax_23 = var_18a0_2 - 1
                    r12_2 += 1
                    var_18a0_2 = rax_23
                    r13_2 -= 1
                while (r15_3 s< rdx)
                
                r13_1 = var_1888_2
            
            if (*(arg1 + 0x1328) == 0 || *(arg1 + 0x47b8) != 0)
            label_1429e322b:
                
                if (*(arg1 + 0x4818) != 0)
                    sub_1429e7060(arg1[0x482].q, (r14_5 << 3).d)
            else
                void* r15_4 = *(arg1 + 0x4848)
                int32_t rbx_4 = (r14_5 - 8).d
                
                if (rbx_4 s>= 0 && rbx_4 + 0x10 s< *(arg1 + 0x5cc))
                    var_1868[2](&arg1[0x483])
                    *(r15_4 + 0x190) = rbx_4
                    *(r15_4 + 0x194) = r14_5.d
                    
                    if (*(arg1 + 0x4eb8) s<= 1)
                        var_1868[4](&arg1[0x483])
                    else
                        var_1868[3](&arg1[0x483])
                    
                    goto label_1429e322b
            
            rbx_3 = var_1898_2
            r14_5 = zx.q(r14_5.d + 8)
            rdi_2 = rdx
        
        rbx_3 += r13_1
        rax_22 = var_18a4_2 + 1
        var_1898_2 = rbx_3
        var_18a4_2 = rax_22
    while (rax_22 s< i_6)
    
    i_5 = i_6

if (*(arg1 + 0x1328) != 0 && *(arg1 + 0x47b8) == 0)
    void* rbx_5 = *(arg1 + 0x4848)
    var_1868[2](&arg1[0x483])
    *(rbx_5 + 0x190) = *(rbx_5 + 0x194)
    *(rbx_5 + 0x194) = *(arg1 + 0x5cc)
    var_1868[4](&arg1[0x483])

void* rbx_7 = sx.q(rdx * i_5) * 0x3fd0 + *(arg1 + 0x4868)

if (*(arg1 + 0x4818) != 0)
    sub_1429e7060(arg1[0x482].q, 0x7fffffff)

int64_t result = sub_142a23260(rbx_7 - 0x3fc0)
__security_check_cookie(rax_1 ^ &var_18d8)
return result
