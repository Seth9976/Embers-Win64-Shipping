// 函数: sub_1412345f0
// 地址: 0x1412345f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439b635c == 0 || (*(arg1 + 0x3c) & 0x1020) != 0x1020)
    return 

void* rdx_1 = *(arg1 + 8) + 0xee8
int32_t j = 0
uint64_t var_80 = 0
int64_t* var_88 = nullptr
int64_t* var_68
sub_1407453e0(&var_68, rdx_1)
int32_t i_1
int32_t i = i_1
uint64_t var_58

if (i s< *(var_58 + 0x18))
    uint64_t rbx
    uint64_t arg_10 = rbx
    
    do
        void* r13_1 = *(*var_68 + sx.q(i) * 0x30 + 0x20)
        int64_t* rcx_2 = *(r13_1 + 0x20)
        void arg_8
        void arg_20
        
        if ((*(*rcx_2 + 0x78))(rcx_2, &arg_20, &arg_8) != 0 && *(*(r13_1 + 0x20) + 0x13c) == 0)
            rbx.b = 0
            
            if (*(arg1 + 0xa8) s<= 0)
                j = 0
            else
                int32_t rax_9
                
                do
                    bool cond:1_1 = sub_14123dcc0(sx.q(j) * 0x5240 + *(arg1 + 0xa0), r13_1) != 0
                    rbx = zx.q(rbx.b)
                    rax_9 = *(arg1 + 0xa8)
                    
                    if (cond:1_1)
                        rbx = 1
                    
                    j += 1
                while (j s< rax_9)
                
                if (rbx.b == 0)
                    j = 0
                else
                    rbx.b = 0
                    j = 0
                    
                    if (rax_9 s> 0)
                        do
                            rbx = zx.q(rbx.b)
                            
                            if (sub_14123dcc0(sx.q(j) * 0x5240 + *(arg1 + 0xa0), r13_1) != 0)
                                rbx = 1
                            
                            j += 1
                        while (j s< *(arg1 + 0xa8))
                        
                        if (rbx.b == 0)
                            j = 0
                        else
                            sub_14121cb90(arg2, &var_80, u"LightShafts0")
                            sub_14121cb90(arg2, &var_88, u"LightShafts1")
                            j = 0
                            int32_t j_1 = 0
                            
                            if (*(arg1 + 0xa8) s> 0)
                                int64_t rcx_9 = 0
                                int64_t var_70_1 = 0
                                
                                do
                                    rbx = zx.q(*(arg2 + 0x8c))
                                    int64_t* r15_2 = *(arg1 + 0xa0) + rcx_9
                                    int32_t rax_12 = r15_2[0x15b].d
                                    
                                    if (rbx.d != rax_12)
                                        bool cond:3_1 = *(arg2 + 0x14) u> 0
                                        *(arg2 + 0x8c) = rax_12
                                        
                                        if (cond:3_1)
                                            void*** rdx_11 =
                                                (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                            void* rax_13 = &rdx_11[3]
                                            
                                            if (rax_13 u> *(arg2 + 0x38))
                                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                                rdx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                                rax_13 = &rdx_11[3]
                                            
                                            *(arg2 + 0x30) = rax_13
                                            int64_t* rax_14 = *(arg2 + 8)
                                            *(arg2 + 0x14) += 1
                                            *rax_14 = rdx_11
                                            int32_t rax_15 = *(arg2 + 0x8c)
                                            *(arg2 + 8) = &rdx_11[1]
                                            rdx_11[1] = 0
                                            *rdx_11 = &data_142f11588
                                            rdx_11[2].d = rax_15
                                        else
                                            *(arg2 + 0x90) = rax_12
                                    
                                    if (sub_14123dcc0(r15_2, r13_1) != 0)
                                        sub_141212200(arg2, r15_2, r13_1, &var_80, &var_88)
                                        void* rax_17 = r15_2[1]
                                        int64_t* var_78 = nullptr
                                        int64_t* r9_2 = rax_17 + 0xb18
                                        
                                        if (rax_17 == 0)
                                            r9_2 = nullptr
                                        
                                        int64_t* var_90_2 = &var_88
                                        int64_t* var_98_4 = &var_88
                                        sub_141226020(arg2, r15_2, r13_1, 
                                            sub_14121d400(arg2, r15_2, r13_1, 
                                                sub_14121dfa0(arg2, r15_2, LSOcclusionHistory", 
                                                r9_2, &var_80, &var_78), 
                                            &var_80))
                                        int64_t* rcx_17 = var_88
                                        int64_t* rsi_1 = *arg3
                                        *arg3 = rcx_17
                                        
                                        if (rcx_17 != 0)
                                            (*(*rcx_17 + 0x30))()
                                        
                                        if (rsi_1 != 0)
                                            (*(*rsi_1 + 0x38))(rsi_1)
                                        
                                        int64_t* rcx_19 = var_78
                                        
                                        if (rcx_19 != 0)
                                            (*(*rcx_19 + 0x38))(rcx_19)
                                    
                                    if (*(arg2 + 0x8c) == rbx.d)
                                        j = 0
                                    else
                                        bool cond:5_1 = *(arg2 + 0x14) u> 0
                                        *(arg2 + 0x8c) = rbx.d
                                        
                                        if (cond:5_1)
                                            void*** rdx_21 =
                                                (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                            void* rax_21 = &rdx_21[3]
                                            
                                            if (rax_21 u> *(arg2 + 0x38))
                                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                                rdx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                                rax_21 = &rdx_21[3]
                                            
                                            *(arg2 + 0x30) = rax_21
                                            int64_t* rax_22 = *(arg2 + 8)
                                            *(arg2 + 0x14) += 1
                                            j = 0
                                            *rax_22 = rdx_21
                                            int32_t rax_23 = *(arg2 + 0x8c)
                                            *(arg2 + 8) = &rdx_21[1]
                                            rdx_21[1] = 0
                                            *rdx_21 = &data_142f11588
                                            rdx_21[2].d = rax_23
                                        else
                                            *(arg2 + 0x90) = rbx.d
                                            j = 0
                                    
                                    j_1 += 1
                                    rcx_9 = var_70_1 + 0x5240
                                    var_70_1 = rcx_9
                                while (j_1 s< *(arg1 + 0xa8))
        
        int32_t var_5c
        int32_t var_50 = var_50 & not.d(var_5c)
        void var_60
        sub_14059bdd0(&var_60)
        i = i_1
    while (i s< *(var_58 + 0x18))

int64_t* rcx_24 = var_88

if (rcx_24 != 0)
    (*(*rcx_24 + 0x38))(rcx_24)

uint64_t rcx_25 = var_80

if (rcx_25 != 0)
    (*(*rcx_25 + 0x38))(rcx_25)
