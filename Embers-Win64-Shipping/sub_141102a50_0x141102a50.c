// 函数: sub_141102a50
// 地址: 0x141102a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
void* r13 = arg1
int64_t rbx = *(data_143ec4ca0 + 8)
void*** rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rdx_3[4]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rdx_3[4]

*(arg2 + 0x30) = rax_2
int64_t* rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
uint64_t rcx_2 = zx.q(data_14401b1a0)
*rax_3 = rdx_3
*(arg2 + 8) = &rdx_3[1]
rdx_3[1] = 0
*rdx_3 = &data_142f115e8
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
rdx_3[2].d = 0x11
rdx_3[3] = rbx

if (data_143e54a08 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_2 << 3))))
    _Init_thread_header(&data_143e54a08)
    
    if (data_143e54a08 == 0xffffffff)
        int64_t* rcx_35 = data_143db18d0
        
        if (rcx_35 == 0)
            sub_140a53c40()
            rcx_35 = data_143db18d0
        
        int64_t r8_6
        r8_6.b = 1
        data_143e54a00 = (*(*rcx_35 + 0xb0))(rcx_35, u"r.HZBOcclusion", r8_6)
        _Init_thread_footer(&data_143e54a08)

int64_t* rcx_4 = data_143e54a00
int32_t var_324 = 0
uint64_t r14
r14.b = (*(*rcx_4 + 0x90))(rcx_4) != 0
char var_328 = r14.b

if (*(r13 + 0xa8) s> 0)
    int64_t rcx_5 = 0
    int64_t var_318_1 = 0
    int64_t r14_2
    
    do
        int32_t rbx_1 = *(arg2 + 0x8c)
        void* r13_2 = *(r13 + 0xa0) + rcx_5
        int32_t rax_8 = *(r13_2 + 0xad8)
        
        if (rbx_1 != rax_8)
            bool cond:1_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rax_8
            
            if (cond:1_1)
                void*** rdx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_9 = &rdx_8[3]
                
                if (rax_9 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_9 = &rdx_8[3]
                
                *(arg2 + 0x30) = rax_9
                int64_t* rax_10 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_10 = rdx_8
                int32_t rax_11 = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_8[1]
                rdx_8[1] = 0
                *rdx_8 = &data_142f11588
                rdx_8[2].d = rax_11
            else
                *(arg2 + 0x90) = rax_8
        
        void* r15_1 = *(r13_2 + 8)
        char rax_12 = sub_141461ee0(r13_2)
        char rax_13 = sub_1410c2300(r13_2)
        char rax_14 = sub_141461ea0(r13_2)
        int64_t* rax_15
        int64_t r8_1
        rax_15, r8_1 = sub_141191440((*U"1111")[sx.q(*(*(arg1 + 8) + 8))])
        
        if (rax_15.b == 0)
            rax_15.b = 0
        else
            int64_t* rcx_14 = data_143db18d0
            
            if (rcx_14 == 0)
                sub_140a53c40()
                rcx_14 = data_143db18d0
            
            r8_1.b = 1
            rax_15 = (*(*rcx_14 + 0xb0))(rcx_14, u"HairStrands.Cluster.CullingUsesHzb", r8_1)
            
            if (rax_15 == 0)
                rax_15.b = 0
            else
                int64_t rdx_12 = *rax_15
                
                if ((*(rdx_12 + 0x90))(rax_15, rdx_12).d s<= 0)
                    rax_15.b = 0
                else
                    rax_15.b = 1
        
        if (rax_13 != 0 || var_328 != rax_13 || rax_12 != 0 || rax_14 != 0 || rax_15.b != 0)
            void var_2b8
            sub_1419928d0(&var_2b8, arg2)
            int64_t var_300
            __builtin_memset(&var_300, 0, 0x48)
            void var_308
            sub_14142a030(&var_2b8, &var_308)
            r14_2 = sx.q(var_324)
            r13 = arg1
            sub_141418800(&var_2b8, &var_308, r14_2 * 0x5240 + *(r13 + 0xa0))
            sub_14199ef00(&var_2b8)
            int32_t var_90_1 = 0
            int32_t var_8c
            void var_98
            
            if (var_8c != 0)
                sub_1410b3aa0(&var_98, 0)
            int32_t var_108_1 = 0
            int32_t var_104
            void var_110
            
            if (var_104 != 0)
                sub_1410b3aa0(&var_110, 0)
            int32_t var_160_1 = 0
            int32_t var_1a0_1 = 0
            int32_t var_19c
            void var_1a8
            
            if (var_19c != 0)
                sub_1410b3bb0(&var_1a8, 0)
            int32_t var_178_1 = 0xffffffff
            int32_t var_174_1 = 0
            void var_198
            sub_141095ed0(&var_198, 0)
            int32_t var_1b0_1 = 0
            int32_t var_1f0_1 = 0
            int32_t var_1ec
            void var_1f8
            
            if (var_1ec != 0)
                sub_1410b3bb0(&var_1f8, 0)
            int32_t var_1c8_1 = 0xffffffff
            int32_t var_1c4_1 = 0
            void var_1e8
            sub_141095ed0(&var_1e8, 0)
            int32_t var_200_1 = 0
            void var_248
            sub_141096480(&var_248, 0)
            int32_t var_250_1 = 0
            void var_298
            sub_14108c840(&var_298)
            
            if (var_328 != 0 && r15_1 != 0 && *(r15_1 + 0x150) != 0)
                sub_14142ed50(r15_1 + 0x138, arg2, r13_2)
        else
            r14_2 = zx.q(var_324)
            r13 = arg1
        
        if (*(arg2 + 0x8c) != rbx_1)
            bool cond:3_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rbx_1
            
            if (cond:3_1)
                void*** rdx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_17 = &rdx_19[3]
                
                if (rax_17 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_17 = &rdx_19[3]
                
                *(arg2 + 0x30) = rax_17
                int64_t* rax_18 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_18 = rdx_19
                int32_t rax_19 = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_19[1]
                rdx_19[1] = 0
                *rdx_19 = &data_142f11588
                rdx_19[2].d = rax_19
            else
                *(arg2 + 0x90) = rbx_1
        
        rcx_5 = var_318_1 + 0x5240
        var_324 = r14_2.d + 1
        var_318_1 = rcx_5
    while (r14_2.d + 1 s< *(r13 + 0xa8))
    r14 = zx.q(var_328)

if (sub_1410ee7c0(*(r13 + 0xa0)) != 0 && sub_141091110(&data_143e2d718, r13 + 0xa0) != 0)
    sub_1410ab0a0(&data_143e2d718, arg2, r13 + 0xa0)

__security_check_cookie(rax_1 ^ &var_348)
return zx.q(r14.b)
