// 函数: sub_14177a2d0
// 地址: 0x14177a2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(*(arg2 + 0x10))
int64_t* var_78
void* var_68
int32_t var_44
int32_t var_40
char arg_8

if (r12.d == 0 || *(arg1 + 0x10) != 0)
    if (r12.d s> *(arg1 + 0x10))
        var_68 = arg2
        int64_t* var_60_1
        __builtin_memset(&var_60_1, 0, 0x15)
        int32_t var_48_2 = 0
        sub_141750820(&var_68)
        void* i
        
        if (i != 0)
            int64_t* rbx_5 = var_60_1
            
            do
                int32_t var_50_2
                int64_t rsi_2 = *(*(i + 0xc8) + (sx.q(var_50_2) << 3))
                
                if (*sub_140865c40(arg1 + 0x38, &arg_8, rsi_2) == 0xffffffff)
                    sub_14177c490(arg1, rsi_2)
                
                if (rbx_5 != 0)
                    int32_t rax_30 = var_40 + 1
                    var_40 = rax_30
                    
                    if (rax_30 s>= rbx_5[1].d)
                    label_14177a639:
                        var_48_2 += 1
                        sub_141750820(&var_68)
                        rbx_5 = var_60_1
                    else
                        int64_t* rdx_12 = *(*rbx_5 + (sx.q(rax_30) << 3))
                        void* rcx_36 = *rdx_12
                        int32_t var_80_2 = rdx_12[1].d
                        
                        if (rcx_36 == 0)
                            char var_7c_4 = 0
                            i.o = rcx_36.o
                        else
                            char var_7c_3 = *(rcx_36 + 0x40)
                            i.o = rcx_36.o
                else
                    int32_t rax_28 = var_50_2 + 1
                    var_50_2 = rax_28
                    
                    if (rax_28 s>= var_44)
                        goto label_14177a639
            while (i != 0)
    
    sub_140625cf0(*(arg1 + 0xc8), *(arg1 + 0xd0))
    int32_t rcx_31 = *(arg1 + 0xd0)
    var_78 = sub_14176ff70
    arg_8.q = arg1
    char* var_70_2 = &arg_8
    sub_14077b750(rcx_31, &var_78, 0)
    *(arg1 + 0xd0) = 0
    
    if (*(arg1 + 0xd4) != 0)
        sub_1405dadb0(arg1 + 0xc8, 0)
else
    int32_t rax_1 = *(arg1 + 0x14)
    int64_t* rbx_1 = *(arg1 + 8)
    int32_t i_7 = *(arg1 + 0x10)
    int32_t rbx_2
    
    if (rax_1 s< 0)
        if (i_7 != 0)
            int32_t i_1
            
            do
                int64_t rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                rbx_1 = &rbx_1[4]
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
            rax_1 = *(arg1 + 0x14)
        
        *(arg1 + 0x10) = 0
        rbx_2 = 0
        
        if (rax_1 != 0)
            sub_1405a51b0(arg1 + 8, 0)
            rbx_2 = *(arg1 + 0x10)
    else
        if (i_7 != 0)
            int32_t i_2
            
            do
                int64_t rcx = *rbx_1
                
                if (rcx != 0)
                    sub_140a74f90(rcx)
                
                rbx_1 = &rbx_1[4]
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
        
        rbx_2 = 0
    
    int32_t rax_2 = rbx_2 + r12.d
    *(arg1 + 0x10) = rax_2
    
    if (rax_2 s> *(arg1 + 0x14))
        sub_1405c4e40(arg1 + 8)
    
    int32_t i_6 = r12.d
    void* rax_5 = (sx.q(rbx_2) << 5) + *(arg1 + 8)
    int32_t i_3
    
    do
        __builtin_memset(rax_5, 0, 0x18)
        *(rax_5 + 0x18) = 0xffffffff
        rax_5 += 0x20
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)
    sub_1408d84f0(arg1 + 0x38)
    
    if (r12.d s> *(arg1 + 0x40) - *(arg1 + 0x6c))
        sub_1409d93a0(arg1 + 0x38, r12.d)
        int32_t rax_12
        
        if (r12.d u< 4)
            rax_12 = 1
        else
            uint32_t rax_9 = r12.d u>> 1
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9 + 8)
            int32_t rcx_6
            
            if (rax_9 == 0xfffffff8)
                rcx_6 = 0x20
            else
                rcx_6 = 0x1f - temp0_1
            
            uint64_t rflags_2
            char temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse(rax_9 + 7)
            
            if (rax_9 == 0xfffffff9)
                rax_12 = 1
            else
                rax_12 = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_2)))
        
        int32_t rcx_11 = *(arg1 + 0x80)
        
        if (rcx_11 == 0 || rcx_11 s< rax_12)
            *(arg1 + 0x80) = rax_12
            sub_1405c0420(arg1 + 0x38)
    
    arg_8.d = 0
    var_68 = arg2
    int64_t* var_60
    __builtin_memset(&var_60, 0, 0x15)
    int32_t var_48_1 = 0
    sub_141750820(&var_68)
    void* i_4
    
    if (i_4 != 0)
        int64_t* rbx_3 = var_60
        char* var_70_1 = &arg_8
        
        do
            int64_t* r8_4 = *(arg1 + 8) + (sx.q(arg_8.d) << 5) + 0x10
            int64_t rcx_17 = *(i_4 + 0xc8)
            var_78 = r8_4
            int32_t var_50_1
            *r8_4 = *(rcx_17 + (sx.q(var_50_1) << 3))
            void arg_10
            sub_1413b83d0(arg1 + 0x38, &arg_10, &var_78, nullptr)
            arg_8.d += 1
            
            if (rbx_3 != 0)
                int32_t rax_21 = var_40 + 1
                var_40 = rax_21
                
                if (rax_21 s>= rbx_3[1].d)
                label_14177a4f6:
                    var_48_1 += 1
                    sub_141750820(&var_68)
                    rbx_3 = var_60
                else
                    int64_t* rdx_6 = *(*rbx_3 + (sx.q(rax_21) << 3))
                    void* rcx_24 = *rdx_6
                    int32_t var_80_1 = rdx_6[1].d
                    
                    if (rcx_24 == 0)
                        char var_7c_2 = 0
                        i_4.o = rcx_24.o
                    else
                        char var_7c_1 = *(rcx_24 + 0x40)
                        i_4.o = rcx_24.o
            else
                int32_t rax_16 = var_50_1 + 1
                var_50_1 = rax_16
                
                if (rax_16 s>= var_44)
                    goto label_14177a4f6
        while (i_4 != 0)
    
    int32_t rax_17 = *(arg1 + 0xe4)
    *(arg1 + 0xe0) = 0
    
    if (rax_17 s< 0 && rax_17 != 0)
        sub_1405dadb0(arg1 + 0xd8, 0)
    
    int64_t rsi_1 = sx.q(*(arg1 + 0xe0))
    int32_t rax_18 = (rsi_1 + r12).d
    *(arg1 + 0xe0) = rax_18
    
    if (rax_18 s> *(arg1 + 0xe4))
        sub_1405a4cf0(arg1 + 0xd8)
    
    memset(*(arg1 + 0xd8) + (rsi_1 << 2), 0, r12 << 2)
int32_t result = *(arg1 + 0x24)
*(arg1 + 0x20) = 0

if (result s< 0 && result != 0)
    result = sub_1405a5130(arg1 + 0x18, 0)

uint64_t* i_5 = *(arg1 + 0x98)

for (void* rsi_5 = &i_5[sx.q(*(arg1 + 0xa0)) * 2]; i_5 != rsi_5; i_5 = &i_5[2])
    result = *(i_5 + 0xc)
    i_5[1].d = 0
    
    if (result s< 0 && result != 0)
        result = sub_1405dadb0(i_5, 0)

return result
