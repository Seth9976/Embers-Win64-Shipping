// 函数: sub_141c62ac0
// 地址: 0x141c62ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c59ee0(arg1)
int32_t arg_10 = arg2
uint64_t result

if (arg2 != 0xffffffff)
label_141c62b37:
    (*(*arg1 + 0x520))(arg1, &arg_10)
    int32_t rcx_4 = arg1[0xd1].d
    int32_t rax_2
    
    if (rcx_4 s>= 1)
        rax_2 = 2
        
        if (rcx_4 s< 2)
            rax_2 = rcx_4
    else
        rax_2 = 1
    
    arg1[0xd1].d = rax_2
    void* rax_3 = arg1[0xd2]
    
    if (rax_3 == 0)
        void arg_18
        uint64_t rbx_1 = *sub_140b58260(&arg_18, u"Synth", (rax_3 + 1).d)
        uint32_t rcx_8
        rcx_8.b = (rbx_1 u>> 0x20).d == 0
        
        if ((rcx_8.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        rax_3 = sub_140d2dfc0(sub_141c75900(), arg1, rbx_1, 0, 0, 0, 0, 0, 0)
        arg1[0xd2] = rax_3
    
    *(rax_3 + 0x138) = arg1[0xc0]
    *(arg1[0xd2] + 0x120) = arg1[0xc1]
    sub_141c51740(arg1[0xd2] + 0x128, &arg1[0xc2])
    sub_141c51740(arg1[0xd2] + 0x140, &arg1[0xc4])
    sub_141c51740(arg1[0xd2] + 0x150, &arg1[0xc8])
    void* rcx_19 = arg1[0xd2]
    *(rcx_19 + 0x30) ^= (*(arg1 + 0x1f4) << 2 ^ *(rcx_19 + 0x30)) & 4
    int32_t rax_9 = arg1[0xd1].d
    void* rdx_5 = arg1[0xd2]
    int32_t rcx_20 = *(arg1 + 0x68c)
    int32_t r8_3 = arg_10
    *(rdx_5 + 0x16d) |= 8
    *(rdx_5 + 0x16b) |= 1
    *(rdx_5 + 0x360) = arg1
    *(rdx_5 + 0x31) = 1
    *(rdx_5 + 0x204) = rax_9
    *(rdx_5 + 0x340) = rcx_20
    *(rdx_5 + 0xf8) = 0x461c4000
    *(rdx_5 + 0x208) = r8_3
    result = arg1[0x15]
    
    if (result != 0)
    label_141c62cd9:
        result = sub_1405948a0(result + 0x170)
    label_141c62cf1:
        
        if (result != 0)
            uint8_t rcx_24 = *(result + 0x352)
            result = arg1[0xd2]
            *(result + 0x378) = rcx_24 u>> 5 & 1
    else
        result = sub_141ee69e0(arg1)
        
        if (result != 0)
            goto label_141c62cd9
        
        void* rcx_23 = arg1[0xd3]
        
        if (rcx_23 != 0)
            result = sub_141ee2210(rcx_23)
            goto label_141c62cf1
else
    result = arg1[0x15]
    
    if (result != 0)
    label_141c62afd:
        result = sub_1405948a0(result + 0x170)
    label_141c62b15:
        
        if (result != 0)
            result = zx.q(*(result + 0xc))
            arg_10 = result.d
    else
        result = sub_141ee69e0(arg1)
        
        if (result != 0)
            goto label_141c62afd
        
        void* rcx_2 = arg1[0xd3]
        
        if (rcx_2 != 0)
            result = sub_141ee2210(rcx_2)
            goto label_141c62b15
    
    if (arg_10 != 0xffffffff)
        goto label_141c62b37

return result
