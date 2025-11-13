// 函数: sub_140749510
// 地址: 0x140749510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x57c) &= 0xfffffffe

if (data_143cdf978 != 0)
    return sub_14076e990(arg1) __tailcall

if (arg1[0x81] == 0)
    sub_140752510(arg1)
    jump(*(*arg1 + 0x340))

void* rdi = arg1[0x15]

if (rdi == 0)
    rdi = sub_141ee69e0(arg1)

int64_t* result = 0x14
int64_t rdx_3
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    result, rdx_3 = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result, rdx_3 = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && rdi != 0
        && (arg1[0x11].b & 1) != 0)
    void* rcx_4 = arg1[0xa5]
    
    if (rcx_4 != 0 && sub_140852300(rcx_4) != arg1[0x81])
        sub_14076e990(arg1)
    
    if (sub_140856f30(arg1[0x81]) == 0)
    label_14074999a:
        rdx_3.b = 1
        *(arg1 + 0x57c) = (zx.d(arg2) * 2) | ((*(arg1 + 0x57c) | 1) & 0xfffffffd)
        return (*(*arg1 + 0x340))(arg1, rdx_3)
    
    void* rsi_1 = arg1[0x15]
    int64_t rbp
    rbp.b = 0
    
    if (rsi_1 == 0)
        void* rax_6
        rax_6, rdx_3 = sub_141ee69e0(arg1)
        rsi_1 = rax_6
        
        if (rax_6 == 0)
            goto label_14074999a
    
    int64_t* rcx_8 = *(rsi_1 + 0x1b0)
    int32_t r15_1 = 1
    
    if (rcx_8 != 0)
        int64_t rdx_4 = *rcx_8
        int64_t* rax_7 = (*(rdx_4 + 0x270))(rcx_8, rdx_4)
        
        if (rax_7 != 0)
            int64_t r8_1 = *rax_7
            rbp = 0
            
            if ((*r8_1)(rax_7, &data_143ce39a0, r8_1) != 0)
                rbp = 1
    
    result, rdx_3 = sub_140865dd0(rsi_1)
    
    if (result == 0 || rbp.b == 0)
        goto label_14074999a
    
    if (arg2 != 0)
        result = sub_1407796f0(arg1)
    
    if (arg3 != 0 || (*(arg1 + 0x57c) & 0x10) == 0)
        int32_t rax_10 = *(arg1 + 0x57c) & 0xffffffef
        *(arg1 + 0x57c) = rax_10
        
        if ((rax_10.b & 8) == 0)
        label_14074973e:
            sub_141ed55e0(arg1, arg2)
            
            if (arg2 == 0 && (*(arg1 + 0x8a) & 1) != 0)
                result = arg1[0xa5]
            
            if (arg2 != 0 || (*(arg1 + 0x8a) & 1) == 0 || result == 0 || *(result + 0x6e4) != 0
                    || result[0xdd].d != 0)
                int32_t rax_14 = *(arg1 + 0x57c)
                bool cond:2_1 = (*(arg1 + 0x54c) & 4) == 0
                *(arg1 + 0x57c) = rax_14 & 0xfffffffb
                
                if (not(cond:2_1))
                    int64_t* rax_16 = sub_140d3c6e0(&arg1[0xad])
                    
                    if (rax_16 == 0)
                        sub_14074c820(arg1, 1)
                    else
                        void* rdx_7 = arg1[0x18]
                        int64_t* rcx_19
                        void* rdx_8
                        
                        if (rdx_7 != 0 && rdx_7 == rax_16 && arg1[0x19] == arg1[0xae])
                            rcx_19 = *(rdx_7 + 0xd0)
                            rdx_8 = &rcx_19[sx.q(*(rdx_7 + 0xd8))]
                        
                        if (rdx_7 == 0 || rdx_7 != rax_16 || arg1[0x19] != arg1[0xae]
                            || rcx_19 == rdx_8)
                        label_1407497f2:
                            *(arg1 + 0x57c) &= 0xfffffffb
                            *(arg1 + 0x57c) |= (zx.d((rax_14 u>> 2).b) & 1) << 2
                            sub_14074c820(arg1, 1)
                            int32_t rax_21 = *(arg1 + 0x124)
                            int64_t r9_3 = arg1[0xae]
                            arg1[0xb0] = *(arg1 + 0x11c)
                            arg1[0xb1].d = rax_21
                            int32_t rax_22 = arg1[0x26].d
                            *(arg1 + 0x58c) = arg1[0x25]
                            int64_t zmm0_2 = *(arg1 + 0x134)
                            *(arg1 + 0x594) = rax_22
                            int32_t rax_23 = *(arg1 + 0x13c)
                            arg1[0xb3] = zmm0_2
                            arg1[0xb4].d = rax_23
                            char arg_8 = arg1[0xaf].b
                            char arg_9 = *(arg1 + 0x579)
                            char arg_a = *(arg1 + 0x57a)
                            uint8_t arg_b = (*(arg1 + 0x54c) u>> 3).b & 1
                            sub_141f32b40(arg1, rax_16, &arg_8, r9_3)
                        else
                            while (*rcx_19 != arg1)
                                rcx_19 = &rcx_19[1]
                                
                                if (rcx_19 == rdx_8)
                                    goto label_1407497f2
                        
                        *(arg1 + 0x57c) |= 4
                
                sub_140b33630("Niagara")
                
                if (arg1[0xa5] == 0)
                    int32_t zmm0_3 = sub_140849850(arg1, &arg1[0xa5])
                    sub_140853260(arg1[0xa5], arg1[0xa4].b & 1, zmm0_3)
                    sub_141ee8490(arg1)
                    r15_1 = 3
                
                int32_t zmm0_4
                result, zmm0_4 = sub_140b37f60("Niagara")
                
                if (arg1[0xa5] != 0)
                    if (arg1[0xb6].d == 0xffffffff && (*(arg1 + 0x57c) & 8) != 0)
                        void* rcx_26 = arg1[0x81]
                        
                        if (rcx_26 != 0 && sub_1405f7040(rcx_26) != 0)
                            void* rax_30 = arg1[0x15]
                            
                            if (rax_30 == 0)
                                rax_30, zmm0_4 = sub_141ee69e0(arg1)
                            
                            int64_t* rax_31 = sub_140865dd0(rax_30)
                            
                            if (rax_31 != 0)
                                zmm0_4 = sub_140868600(rax_31, arg1)
                    
                    sub_1408493c0(arg1[0xa5], r15_1, zmm0_4)
                    int64_t r8_4 = *arg1
                    return (*(r8_4 + 0x340))(arg1, *(arg1[0xa5] + 0x6b8) & 1, r8_4)
        else
            void* rcx_12 = arg1[0x81]
            
            if (rcx_12 == 0)
                goto label_14074973e
            
            void* rax_11 = sub_1405f7040(rcx_12)
            
            if (rax_11 == 0)
                goto label_14074973e
            
            void* rax_12 = arg1[0x15]
            
            if (rax_12 == 0)
                rax_12 = sub_141ee69e0(arg1)
            
            int64_t* rax_13
            uint8_t r9_2
            rax_13, r9_2 = sub_140865dd0(rax_12)
            
            if (rax_13 == 0 || *(rax_11 + 0x28) != 0)
                goto label_14074973e
            
            result = sub_1408696d0(rax_13, arg1[0x81], arg1, r9_2)
            
            if (result.b == 0)
                goto label_14074973e
            
            *(arg1 + 0x57c) |= 0x10

return result
