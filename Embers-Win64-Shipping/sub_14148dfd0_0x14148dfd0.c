// 函数: sub_14148dfd0
// 地址: 0x14148dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13 = arg2
sub_140b33630("InitViews_Shadows")
int32_t rax = *(arg1 + 0x3b0)
uint64_t rsi
rsi.b = 0
char arg_8 = 0

if (*(arg1 + 0xa8) s> 0)
    uint64_t i_3 = zx.q(*(arg1 + 0xa8))
    char* rax_2 = *(arg1 + 0xa0) + 0xd79
    uint64_t i
    
    do
        if (rsi.b != 0 || *rax_2 != rsi.b)
            rsi.b = 1
        
        rax_2 = &rax_2[0x5240]
        i = i_3
        i_3 -= 1
    while (i != 1)
    arg_8 = rsi.b

void* rax_3 = *(arg1 + 8)
int32_t r14 = 0
int32_t rbx = 0
int32_t var_c4 = 0
int32_t var_c0 = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x30)
char rdx = **(rax_3 + 0x6328)
sub_140b33630("ShadowInitDynamic")
int64_t* var_78
sub_1407453e0(&var_78, *(arg1 + 8) + 0xee8)
int32_t i_2
int32_t i_1 = i_2
int64_t var_98
int64_t var_88
void* var_68

if (i_1 s< *(var_68 + 0x18))
    uint64_t r15_1 = zx.q(data_14401b1a0)
    
    do
        void* r12_3 = sx.q(i_1) * 0x30 + *var_78
        void* var_b0_1 = r12_3
        int64_t* rsi_1 = *(r12_3 + 0x20)
        int64_t* rcx_4 = sx.q(rsi_1[5].d) * 0x70 + *(arg1 + 0x2f0)
        
        if (sub_1412277d0(r12_3) == 0 && (*(r12_3 + 0x28) & 0xc) != 0)
            int32_t rax_9
            float zmm0_1[0x4]
            rax_9, zmm0_1 = sub_14148c700()
            
            if (rax_9 != 0)
                int32_t j = 0
                
                if (*(arg1 + 0xa8) s> 0)
                    do
                        if (sub_14123dc60(rsi_1, sx.q(j) * 0x5240 + *(arg1 + 0xa0)) != 0)
                            TEB* gsbase
                            
                            if (data_143ee1d00 s>
                                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r15_1 << 3))))
                                int64_t r8_6
                                r8_6, zmm0_1 = _Init_thread_header(&data_143ee1d00)
                                
                                if (data_143ee1d00 == 0xffffffff)
                                    int64_t* rcx_28 = data_143db18d0
                                    
                                    if (rcx_28 == 0)
                                        sub_140a53c40()
                                        rcx_28 = data_143db18d0
                                    
                                    r8_6.b = 1
                                    int64_t* rax_39 =
                                        (*(*rcx_28 + 0xb0))(rcx_28, r.AllowStaticLighting", r8_6)
                                    int64_t rax_37
                                    
                                    if (rax_39 == 0)
                                        rax_37 = 0
                                    else
                                        int64_t rdx_17 = *rax_39
                                        rax_37 = (*(rdx_17 + 0x58))(rax_39, rdx_17)
                                    
                                    data_143ee1cf8 = rax_37
                                    zmm0_1 = _Init_thread_footer(&data_143ee1d00)
                            
                            void* rax_15 = data_143ee1cf8
                            char rcx_7
                            
                            if (rax_15 == 0 || *(rax_15 + 4) != 0)
                                rcx_7 = 1
                            else
                                rcx_7 = 0
                            
                            int32_t rdx_5 = *(r12_3 + 0x28)
                            void* rax_19 = rsi_1[4]
                            r14.b = (((rdx_5 & 3) - 1) & 0xfffffffd) == 0
                            char var_c7_1
                            char r13_1
                            
                            if ((rdx_5.b & 4) == 0 || ((*(rax_19 + 0x138) & 8) != 0 && rcx_7 != 0))
                                r13_1 = rdx
                                r15_1.b = 0
                                var_c7_1 = 0
                            else
                                r13_1 = rdx
                                r15_1.b = 1
                                
                                if (r14.b == 0 || r13_1 != 0)
                                    var_c7_1 = 1
                                else
                                    var_c7_1 = 0
                            
                            char rax_20
                            
                            if ((*(rax_19 + 0x138) & 8) != 0 && (rdx_5.b & 8) != 0)
                                rax_20 = sub_14122cc00(rsi_1)
                            
                            if ((*(rax_19 + 0x138) & 8) == 0 || (rdx_5.b & 8) == 0 || rax_20 != 0)
                                j.b = 0
                                r13_1 = 0
                            else
                                j.b = 1
                                
                                if (r14.b == 0 || r13_1 != 0)
                                    r13_1 = 1
                                else
                                    r13_1 = 0
                            
                            char rcx_9 = *(rsi_1[4] + 0x138)
                            uint64_t rax_21
                            
                            if ((rcx_9 & 8) != 0 && (rcx_9 & 4) == 0 && (*(r12_3 + 0x28) & 8) != 0)
                                rax_21 = sub_14122cc00(rsi_1)
                            
                            if ((rcx_9 & 8) == 0 || (rcx_9 & 4) != 0 || (*(r12_3 + 0x28) & 8) == 0
                                    || rax_21.b == 0 || *(rsi_1[4] + 0xf8) != 0xffffffff)
                                rax_21.b = 0
                                r12_3.b = 0
                            else
                                rax_21.b = 1
                                
                                if (r14.b == 0 || rdx != 0)
                                    r12_3.b = 1
                                else
                                    r12_3.b = 0
                            
                            if ((r15_1.b != 0 || rax_21.b != 0 || j.b != 0) && r14.b != 0)
                                int64_t r15_2 = sx.q(*(arg1 + 0x3a8))
                                int32_t rax_24 = (r15_2 + 1).d
                                int64_t rbx_2 = *(*(*(var_b0_1 + 0x20) + 0x20) + 0x140)
                                *(arg1 + 0x3a8) = rax_24
                                
                                if (rax_24 s> *(arg1 + 0x3ac))
                                    zmm0_1 = sub_14083a310(arg1 + 0x3a0, r15_2.d)
                                
                                *(*(arg1 + 0x3a0) + (r15_2 << 3)) = rbx_2
                            
                            if (var_c7_1 != 0 || r13_1 != 0 || r12_3.b != 0)
                                sub_1414878f0(arg1, rsi_1, &var_c4, &var_c0, zmm0_1)
                            
                            int64_t* rcx_13 = rsi_1[4]
                            
                            if (((rcx_13[0x27].b & 4) != 0 || (*(var_b0_1 + 0x28) & 4) == 0)
                                    && r13_1 == 0)
                                r13 = arg2
                            else
                                char rax_28
                                void* rax_30
                                
                                if (rax s< 3)
                                    rax_28 = (*(*rcx_13 + 0x98))()
                                    
                                    if (rax_28 != 0 || (*(rsi_1[4] + 0x138) & 2) != 0)
                                        rax_30 = *(arg1 + 8)
                                
                                int64_t* r15_3
                                
                                if (rax s>= 3 || ((rax_28 != 0 || (*(rsi_1[4] + 0x138) & 2) != 0)
                                        && (rsi_1 == *(rax_30 + 0xfa0)
                                        || rsi_1 == *(rax_30 + 0xfa8)
                                        || rsi_1 == *(rax_30 + 0xfb0))))
                                    r15_3 = rcx_4
                                    sub_14147a200(arg1, &var_a8, &var_88, r15_3, rsi_1)
                                else
                                    r15_3 = rcx_4
                                
                                if (rax s>= 3)
                                label_14148e392:
                                    sub_1413e83d0(*(arg1 + 8))
                                    int64_t* k_2 = sub_141226dd0(rsi_1, 0)
                                    int64_t* k = k_2
                                    r13 = arg2
                                    int64_t* var_e8
                                    
                                    if (k_2 != 0)
                                        do
                                            int64_t* var_d8_1 = &var_98
                                            var_e8.b = arg_8
                                            sub_14149f8f0(arg1, r13, k, r15_3.b, var_e8, &var_a8)
                                            k = k[3]
                                        while (k != 0)
                                    
                                    int64_t* k_3 = sub_141226e00(rsi_1, 0)
                                    int64_t* k_1 = k_3
                                    
                                    if (k_3 != 0)
                                        do
                                            int64_t* var_d8_2 = &var_98
                                            var_e8.b = arg_8
                                            sub_14149f8f0(arg1, r13, k_1, r15_3.b, var_e8, &var_a8)
                                            k_1 = k_1[3]
                                        while (k_1 != 0)
                                else
                                    int64_t* rcx_15 = rsi_1[4]
                                    
                                    if ((*(rcx_15 + 0x13a) & 0x10) == 0)
                                        r13 = arg2
                                    else
                                        if ((*(*rcx_15 + 0x98))(rcx_15) == 0)
                                            goto label_14148e392
                                        
                                        r13 = arg2
                            
                            r15_1 = zx.q(data_14401b1a0)
                            break
                        
                        j += 1
                    while (j s< *(arg1 + 0xa8))
        
        int32_t var_6c
        int32_t var_60 = var_60 & not.d(var_6c)
        void var_70
        sub_14059bdd0(&var_70)
        i_1 = i_2
    while (i_1 s< *(var_68 + 0x18))
    
    r14 = var_c4
    rbx = var_c0
    rsi = zx.q(arg_8)

int128_t zmm2
zmm2.d = float.s(zx.q(rbx + r14))
sub_140b43f30("UpdatedShadowMaps", data_143e51ce8, zmm2, 0)
sub_14148e5a0(arg1, r13)
sub_1414b3410(arg1, &data_143ec4c60, sub_140b37f60("ShadowInitDynamic"))
sub_14148a6f0(arg1, &var_98, &var_88, rsi.b)
sub_14147cb80(arg1, r13)
sub_14148a340(arg1, arg3, arg4, arg5)
return sub_140b37f60("InitViews_Shadows")
