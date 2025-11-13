// 函数: sub_141e5fdb0
// 地址: 0x141e5fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x428)
char arg_8

if (rbx == 0)
    int64_t rbx_1 = *sub_140b58260(&arg_8, u"AssetRegistry", (rbx + 1).d)
    j_sub_140b3db50()
    int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t rdx_1 = *rax_2
    int64_t* rax_3 = (*(rdx_1 + 0x48))(rax_2, rdx_1)
    rbx = rax_3
    *(arg1 + 0x428) = rax_3

uint64_t r15
r15.b = 0
int64_t var_90 = 0
arg_8 = 0
int64_t var_88 = 0
sub_1405a51b0(&var_90, 0x80)
int64_t var_68 = arg2
int64_t rax_4 = *rbx
int32_t i_1 = 0
int64_t var_60_1
__builtin_memset(&var_60_1, 0, 0x18)
(*(rax_4 + 0x88))(rbx, &var_68, &var_90, 0x18, 0, var_90, var_88)
i_1 = 0

if (var_88.d s> 0)
    int64_t rcx_4 = 0
    int64_t var_40_1 = 0
    int64_t var_70 = 0
    int32_t i
    
    do
        int64_t rax_5 = var_90
        int64_t rbx_2 = *(rcx_4 + rax_5 + 8)
        int64_t var_80
        int32_t rcx_5
        int64_t rdi_1
        
        if (rbx_2 == 0)
            rcx_5 = 0
            var_80 = 0
            rbx_2 = var_80
            r15 = 0
            int32_t var_74_1 = 0
            rdi_1 = 0.q
        else
            rdi_1 = *(rcx_4 + rax_5 + 0x10)
            int32_t var_78
            var_78.q = rdi_1
            rcx_5 = var_78
            r15 = rdi_1 u>> 0x20
            var_80 = rbx_2
        
        if (rbx_2 == 0)
            r15 = zx.q(arg_8)
        else
            rcx_5.b = sub_140b5b8a0(rcx_5, 0) == 0
            rcx_5.b |= r15.d != 0
            
            if (rcx_5.b == 0)
                r15 = zx.q(arg_8)
            else
                r15.b = 1
                arg_8 = 1
                sub_141c8f3d0(arg4, &var_70, &var_80, nullptr)
                
                if (arg3 != 0)
                    void* const rcx_10
                    
                    if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
                    label_141e5ffa5:
                        rcx_10 = nullptr
                    else
                        int32_t rax_8 = sub_140cde1f0(&var_80)
                        void* r8_3 = arg1 + 0x100
                        void* rcx_8 = *(r8_3 + 8)
                        
                        if (rcx_8 != 0)
                            r8_3 = rcx_8
                        
                        int32_t rax_10 =
                            *(r8_3 + (((sx.q(*(arg1 + 0x110)) - 1) & sx.q(rax_8)) << 2))
                        
                        if (rax_10 == 0xffffffff)
                        label_141e5ffa5_1:
                            rcx_10 = nullptr
                        else
                            int64_t r8_4 = *(arg1 + 0xc8)
                            
                            while (true)
                                int64_t rdx_7 = sx.q(rax_10) * 5
                                rcx_10 = r8_4 + (rdx_7 << 3)
                                
                                if (*(r8_4 + (rdx_7 << 3)) == rbx_2 && *(rcx_10 + 8) == rdi_1)
                                    break
                                
                                rax_10 = *(rcx_10 + 0x20)
                                
                                if (rax_10 == 0xffffffff)
                                    goto label_141e5ffa5_2
                            
                            if (rax_10 == 0xffffffff)
                            label_141e5ffa5_2:
                                rcx_10 = nullptr
                    
                    void* rax_11 = rcx_10 + 0x10
                    
                    if (rcx_10 == 0)
                        rax_11 = nullptr
                    
                    if (rax_11 != 0)
                        int64_t* j = *rax_11
                        
                        for (void* r15_4 = &j[sx.q(*(rax_11 + 8)) * 2]; j != r15_4; j = &j[2])
                            int32_t rax_15
                            
                            if (arg4[1].d != *(arg4 + 0x34))
                                int32_t rax_13 = sub_140cde1f0(j)
                                void* rcx_12 = arg4[8]
                                void* r8_5 = &arg4[7]
                                
                                if (rcx_12 != 0)
                                    r8_5 = rcx_12
                                
                                rax_15 = *(r8_5 + (((sx.q(arg4[9].d) - 1) & sx.q(rax_13)) << 2))
                            
                            if (arg4[1].d == *(arg4 + 0x34) || rax_15 == 0xffffffff)
                            label_141e60042:
                                rax_15 = -1
                            else
                                int64_t r8_6 = *arg4
                                
                                while (true)
                                    int64_t rdx_11 = sx.q(rax_15) * 3
                                    
                                    if (*(r8_6 + (rdx_11 << 3)) == *j
                                            && *(r8_6 + (rdx_11 << 3) + 8) == j[1])
                                        break
                                    
                                    rax_15 = *(r8_6 + (rdx_11 << 3) + 0x10)
                                    
                                    if (rax_15 == 0xffffffff)
                                        goto label_141e60042
                            
                            if (rax_15 == 0xffffffff)
                                int64_t rdi_2 = sx.q(var_88.d)
                                int64_t var_60_2 = *j
                                int64_t rax_17 = j[1]
                                int64_t var_50_1 = 0
                                int32_t rax_18 = (rdi_2 + 1).d
                                int64_t var_48_1 = 0
                                var_68 = 0
                                var_88.d = rax_18
                                
                                if (rax_18 s> var_88:4.d)
                                    sub_1405c4e40(&var_90)
                                
                                int64_t rax_19 = var_90
                                int64_t rcx_17 = rdi_2 << 5
                                *(rcx_17 + rax_19) = var_68.o
                                *(rcx_17 + rax_19 + 0x10) = rax_17.o
                    
                    r15 = zx.q(arg_8)
        
        i = i_1 + 1
        rcx_4 = var_40_1 + 0x20
        i_1 = i
        var_40_1 = rcx_4
    while (i s< var_88.d)

int64_t rcx_19 = var_90

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

return zx.q(r15.b)
