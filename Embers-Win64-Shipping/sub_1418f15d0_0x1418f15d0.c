// 函数: sub_1418f15d0
// 地址: 0x1418f15d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
__builtin_memset(arg1, 0, 0x24)
void* rsi = arg4
void* r12 = arg3
__builtin_memset(&arg1[5], 0, 0x28)
arg1[0xb].d = *(arg3 + 0xc0)
__builtin_memset(arg1 + 0x5c, 0, 0xa4)
void* rax_1 = &arg1[0x14]
void* var_b8 = rax_1
uint32_t rdx = zx.d(*(arg4 + 0x360))
arg1[1].d = 0

if (*(arg1 + 0xc) != rdx)
    sub_1405a5130(arg1, rdx)
    rax_1 = &arg1[0x14]

int32_t rcx_1 = *(rsi + 0x380)
int32_t var_c0 = 0
int32_t i_2 = 0
uint32_t arg_8 = 6
int32_t var_118
int32_t var_110
int32_t var_108
int32_t var_100
int32_t var_f8
uint32_t var_f0
char var_e8
int64_t var_e0
int128_t var_d8
int32_t var_c8
void* var_a8

if (*(r12 + 0xc0) s> 0)
    void* rdx_1 = arg3
    void* r12_1 = r12 + 0xc
    var_a8 = r12_1
    int32_t i
    
    do
        int64_t* rcx_2 = *(r12_1 - 0xc)
        
        if (rcx_2 != 0)
            void* rax_3 = (*(*rcx_2 + 0x48))(rcx_2)
            __builtin_memset(&var_d8, 0, 0x14)
            *(var_b8 - 0x40) = *(rax_3 + 0x18)
            int32_t r8 = *(rax_3 + 0x60)
            int32_t r9 = *(r12_1 - 4)
            var_c0 = r9
            
            if (((r8 - 1) & 0xfffffffb) == 0)
                uint32_t rcx_9
                
                if (r8 s< 0 || r8 s<= 2)
                    rcx_9 = 1
                else if (r8 == 3)
                    rcx_9 = 6
                else if (r8 == 5)
                    rcx_9 = *(rax_3 + 0x58)
                else if (r8 != 6)
                    rcx_9 = 1
                else
                    rcx_9 = *(rax_3 + 0x58) * 6
                
                int32_t rax_9 = *r12_1
                
                if (rax_9 s<= 0)
                    rax_9 = 0
                
                var_e0 = 0
                var_e8 = 1
                var_f0 = rcx_9
                var_f8 = rax_9
                var_100 = 1
                var_108 = r9
                var_110 = *(rax_3 + 0x24)
                var_118 = *(rax_3 + 0x34)
                goto label_1418f188b
            
            int64_t r12_2
            
            if (r8 == 3)
                int64_t rbx_1 = *(rax_3 + 0x18)
                var_e0 = 0
                var_e8 = 1
                var_f0 = 1
                var_f8 = *r12_1
                var_100 = 1
                var_108 = r9
                var_110 = *(rax_3 + 0x24)
                var_118 = *(rax_3 + 0x34)
                int64_t rax_6 = sub_141903390(*(rax_3 + 0x10), rbx_1, 1, *(rax_3 + 0x78), var_118, 
                    var_110, var_108, 1, var_f8, 1, 1, nullptr)
                r12_2 = rax_6
                var_d8.q = rax_6
                var_d8:8.q = rbx_1
                
                if (data_1439c7a08 s<= 1)
                    int32_t rcx_6 = (data_143efb4e0).d
                    data_143efb4e0 += 1
                    var_c8 = rcx_6 + 1
            else if (r8 != 2)
                r12_2 = var_d8.q
            else
                var_e0 = 0
                var_e8 = 1
                var_f0 = *(rax_3 + 0x30)
                var_f8 = 0
                var_100 = 1
                var_108 = r9
                var_110 = *(rax_3 + 0x24)
                var_118 = *(rax_3 + 0x34)
                r8 = 5
            label_1418f188b:
                int64_t rbx_2 = *(rax_3 + 0x18)
                int64_t rax_10 = sub_141903390(*(rax_3 + 0x10), rbx_2, r8, *(rax_3 + 0x78), 
                    var_118, var_110, var_108, 1, var_f8, var_f0, 1, nullptr)
                r12_2 = rax_10
                var_d8:8.q = rbx_2
                var_d8.q = rax_10
                
                if (data_1439c7a08 s<= 1)
                    int32_t rax_11 = (data_143efb4e0).d
                    data_143efb4e0 += 1
                    var_c8 = rax_11 + 1
            
            int64_t rbx_3 = sx.q(arg1[1].d)
            int32_t rax_13 = (rbx_3 + 1).d
            arg1[1].d = rax_13
            
            if (rax_13 s> *(arg1 + 0xc))
                sub_1405a4df0(arg1)
            
            int64_t rax_14 = *arg1
            int64_t rcx_12 = rbx_3 * 3
            *(rax_14 + (rcx_12 << 3)) = var_d8
            *(rax_14 + (rcx_12 << 3) + 0x10) = var_c8.q
            int64_t rbx_4 = sx.q(arg1[6].d)
            int32_t rax_15 = (rbx_4 + 1).d
            arg1[6].d = rax_15
            
            if (rax_15 s> *(arg1 + 0x34))
                sub_1405a4d70(&arg1[5])
            
            *(arg1[5] + (rbx_4 << 3)) = r12_2
            void* rbx_5 = *(rax_3 + 0x68)
            
            if (rbx_5 != 0)
                *(rbx_5 + 8) += 1
            
            int64_t rsi_2 = sx.q(arg1[8].d)
            void* r8_3 = &arg1[7]
            int32_t rax_17 = (rsi_2 + 1).d
            *(r8_3 + 8) = rax_17
            
            if (rax_17 s> *(r8_3 + 0xc))
                sub_1405a4d70(r8_3)
                r8_3 = &arg1[7]
            
            r12_1 = var_a8
            *(*r8_3 + (rsi_2 << 3)) = rbx_5
            *(arg1 + 0x5c) += 1
            rsi = arg4
            
            if (*(arg3 + 0x188) == 0 || *(rsi + 0x364) == 0)
                rax_1 = var_b8
            else if (*(rsi - arg1 + var_b8 - 0x4c) == 0)
                rax_1 = var_b8
            else
                int64_t* rcx_15 = *(r12_1 + 0xbc)
                void* rax_23 = (*(*rcx_15 + 0x48))(rcx_15)
                __builtin_memset(&var_d8, 0, 0x14)
                *var_b8 = *(rax_23 + 0x18)
                int32_t r8_4 = *(rax_23 + 0x60)
                int64_t rsi_3
                
                if (((r8_4 - 1) & 0xfffffffb) != 0)
                    rsi_3 = 0
                else
                    uint32_t rcx_19
                    
                    if (r8_4 s< 0 || r8_4 s<= 2)
                        rcx_19 = 1
                    else if (r8_4 == 3)
                        rcx_19 = 6
                    else if (r8_4 == 5)
                        rcx_19 = *(rax_23 + 0x58)
                    else if (r8_4 != 6)
                        rcx_19 = 1
                    else
                        rcx_19 = *(rax_23 + 0x58) * 6
                    
                    int32_t rax_25 = *r12_1
                    int64_t rbx_7 = *(rax_23 + 0x18)
                    
                    if (rax_25 s<= 0)
                        rax_25 = 0
                    
                    var_e0 = 0
                    var_e8 = 1
                    var_f0 = rcx_19
                    var_f8 = rax_25
                    var_100 = 1
                    var_108 = var_c0
                    var_110 = *(rax_23 + 0x24)
                    var_118 = *(rax_23 + 0x34)
                    int64_t rax_27 = sub_141903390(*(rax_23 + 0x10), rbx_7, r8_4, *(rax_23 + 0x78), 
                        var_118, var_110, var_108, 1, var_f8, var_f0, 1, nullptr)
                    rsi_3 = rax_27
                    var_d8.q = rax_27
                    var_d8:8.q = rbx_7
                    
                    if (data_1439c7a08 s<= 1)
                        int32_t rcx_21 = (data_143efb4e0).d
                        data_143efb4e0 += 1
                        var_c8 = rcx_21 + 1
                
                int64_t rbx_8 = sx.q(arg1[1].d)
                int32_t rax_28 = (rbx_8 + 1).d
                arg1[1].d = rax_28
                
                if (rax_28 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t rax_29 = *arg1
                int64_t rcx_24 = rbx_8 * 3
                *(rax_29 + (rcx_24 << 3)) = var_d8
                *(rax_29 + (rcx_24 << 3) + 0x10) = var_c8.q
                int64_t rbx_9 = sx.q(arg1[6].d)
                int32_t rax_30 = (rbx_9 + 1).d
                arg1[6].d = rax_30
                
                if (rax_30 s> *(arg1 + 0x34))
                    sub_1405a4d70(&arg1[5])
                
                *(arg1[5] + (rbx_9 << 3)) = rsi_3
                rsi = arg4
                rax_1 = var_b8
            
            rdx_1 = arg3
        
        rax_1 += 8
        i = i_2 + 1
        var_b8 = rax_1
        r12_1 += 0x18
        i_2 = i
        var_a8 = r12_1
    while (i s< *(rdx_1 + 0xc0))
    r12 = arg3

int32_t r12_3

if (*(rsi + 0x363) == 0)
    r12_3 = rcx_1
else
    int64_t* rcx_27 = *(r12 + 0x190)
    void* rax_33 = (*(*rcx_27 + 0x48))(rcx_27)
    arg1[0x1c] = *(rax_33 + 0x18)
    int128_t* rcx_29 = *(rax_33 + 0x98)
    *(arg1 + 0x10) = *rcx_29
    arg1[4] = rcx_29[1].q
    
    if (*(arg1 + 0x5c) != 0 || *(rax_33 + 0x60) != 3)
        int64_t rbx_13 = sx.q(arg1[1].d)
        int32_t rax_40 = (rbx_13 + 1).d
        arg1[1].d = rax_40
        
        if (rax_40 s> *(arg1 + 0xc))
            sub_1405a4df0(arg1)
        
        int64_t rax_41 = *arg1
        int64_t rcx_38 = rbx_13 * 3
        *(rax_41 + (rcx_38 << 3)) = *(rax_33 + 0x80)
        rsi = arg4
        *(rax_41 + (rcx_38 << 3) + 0x10) = *(rax_33 + 0x90)
        r12_3 = rcx_1
    else
        r12_3 = 6
        int64_t rbx_10 = *(rax_33 + 0x18)
        var_e0 = 0
        var_e8 = 1
        var_f0 = 6
        var_f8 = 0
        var_100 = 1
        var_108 = var_c0
        var_110 = *(rax_33 + 0x24)
        var_118 = *(rax_33 + 0x34)
        var_c8 = 0
        int64_t rax_35 = sub_141903390(*(rax_33 + 0x10), rbx_10, 5, *(rax_33 + 0x78), var_118, 
            var_110, var_108, 1, 0, 6, 1, nullptr)
        var_d8.q = rax_35
        var_d8:8.q = rbx_10
        
        if (data_1439c7a08 s<= 1)
            int32_t rcx_32 = (data_143efb4e0).d
            data_143efb4e0 += 1
            var_c8 = rcx_32 + 1
        
        int64_t rbx_11 = sx.q(arg1[1].d)
        int32_t rax_36 = (rbx_11 + 1).d
        arg1[1].d = rax_36
        
        if (rax_36 s> *(arg1 + 0xc))
            sub_1405a4df0(arg1)
        
        int64_t rax_37 = *arg1
        int64_t rcx_35 = rbx_11 * 3
        *(rax_37 + (rcx_35 << 3)) = var_d8
        *(rax_37 + (rcx_35 << 3) + 0x10) = var_c8.q
        int64_t rbx_12 = sx.q(arg1[6].d)
        int32_t rax_38 = (rbx_12 + 1).d
        arg1[6].d = rax_38
        
        if (rax_38 s> *(arg1 + 0x34))
            sub_1405a4d70(&arg1[5])
        
        *(arg1[5] + (rbx_12 << 3)) = rax_35
        rsi = arg4

if (*(rsi + 0x365) != 0 && (*(arg2 + 0x1af0) & 0x400) != 0)
    int64_t* rcx_39 = *(arg3 + 0x1a8)
    void* rax_45 = (*(*rcx_39 + 0x48))(rcx_39)
    var_c8 = 0
    arg1[0x1d] = *(rax_45 + 0x18)
    int32_t r8_5 = *(rax_45 + 0x60)
    
    if (r8_5 s< 0 || r8_5 s<= 2)
        arg_8 = 1
    else if (r8_5 != 3)
        if (r8_5 == 5)
            arg_8 = *(rax_45 + 0x58)
        else if (r8_5 != 6)
            arg_8 = 1
        else
            arg_8 = *(rax_45 + 0x58) * 6
    
    int64_t rbx_14 = *(rax_45 + 0x18)
    var_e0 = 0
    var_e8 = 1
    var_f0 = arg_8
    var_f8 = 0
    var_100 = 1
    var_108 = var_c0
    var_110 = *(rax_45 + 0x24)
    var_118 = *(rax_45 + 0x34)
    int64_t rax_51 = sub_141903390(*(rax_45 + 0x10), rbx_14, r8_5, *(rax_45 + 0x78), var_118, 
        var_110, var_108, 1, 0, var_f0, 1, nullptr)
    var_d8.q = rax_51
    var_d8:8.q = rbx_14
    
    if (data_1439c7a08 s<= 1)
        int32_t r15_1 = (data_143efb4e0).d
        data_143efb4e0 += 1
        var_c8 = r15_1 + 1
    
    int64_t rbx_15 = sx.q(arg1[1].d)
    int32_t rax_52 = (rbx_15 + 1).d
    arg1[1].d = rax_52
    
    if (rax_52 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    int64_t rax_53 = *arg1
    int64_t rcx_46 = rbx_15 * 3
    *(rax_53 + (rcx_46 << 3)) = var_d8
    *(rax_53 + (rcx_46 << 3) + 0x10) = var_c8.q
    int64_t rbx_16 = sx.q(arg1[6].d)
    int32_t rax_54 = (rbx_16 + 1).d
    arg1[6].d = rax_54
    
    if (rax_54 s> *(arg1 + 0x34))
        sub_1405a4d70(&arg1[5])
    
    *(arg1[5] + (rbx_16 << 3)) = rax_51

int32_t rax_56 = arg1[1].d
int32_t r8_6 = 0
int64_t var_a0 = 0
int64_t var_98 = 0

if (rax_56 != 0)
    sub_1405c5570(&var_a0, rax_56)
    rax_56 = arg1[1].d
    r8_6 = var_98.d
    r14 = var_a0

int64_t* i_1 = *arg1

while (i_1 != &i_1[sx.q(rax_56) * 3])
    int64_t rsi_7 = sx.q(r8_6)
    r8_6 = (rsi_7 + 1).d
    var_98.d = r8_6
    
    if (r8_6 s> var_98:4.d)
        sub_1405a4d70(&var_a0)
        r8_6 = var_98.d
        r14 = var_a0
    
    int64_t rax_58 = *i_1
    i_1 = &i_1[3]
    *(r14 + (rsi_7 << 3)) = rax_58

int32_t var_88 = 0x25
int64_t var_84
__builtin_memset(&var_84, 0, 0x34)
int32_t var_4c = 0
int64_t var_6c
var_6c:4.d = r8_6
int64_t var_64 = r14
int32_t var_54 = r12_3
int64_t var_74 = *(arg5 + 0x388)
int64_t var_5c
var_5c:4.d = *(arg4 + 0x378)
int32_t rax_61 = *(arg4 + 0x37c)
int32_t rax_63 = data_143efb8f0(*(arg2 + 8), &var_88, 0, &arg1[9], var_118, var_110, var_108, 
    var_100, var_f8, var_f0, var_e8, var_e0, var_d8, var_c8, var_c0, var_b8, i_2, var_a8)

if (rax_63 s< 0)
    sub_141903f80(rax_63, 
        "VulkanRHI::vkCreateFramebuffer(Device.GetInstanceHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, "
    "&Framebuffer)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanViewport.cpp")

arg1[0xa].d = var_5c:4.d
*(arg1 + 0x54) = rax_61

if (r14 != 0)
    sub_140a74f90(r14)

return arg1
