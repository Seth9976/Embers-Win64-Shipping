// 函数: sub_1419a9b20
// 地址: 0x1419a9b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int128_t zmm0 = *(arg3 + 0x20)
char rbx = arg6

if (rbx == 2)
    rbx = *(arg1 + 0x108)

int64_t rax = *(arg1 + 0x100)
int64_t rdi = zmm0:8.q
char var_30 = rbx
char var_2f = arg4
uint64_t result

if (zmm0.q == rax && rdi.b == rbx)
    result = rdi u>> 8

if (zmm0.q != rax || rdi.b != rbx || result.b != arg4)
    char r14_1 = *(arg3 + 0x18) & 2
    
    if (r14_1 != 0 && (rdi u>> 8).b == 0 && arg4 == 1)
        sub_14198ff30(arg1 + 0x78, &arg_10)
    
    int32_t r9 = 0
    int32_t arg_8
    int32_t r10_1
    
    if (arg4 == 0)
        r10_1 = 0
        arg_8 = 0
    else if (zx.d(arg4) != 1)
        r10_1 = 6
        arg_8 = 6
    else if (arg5 == 0)
        int32_t r10_2
        r10_2.b = zmm0:9.b == 1
        r10_1 = r10_2 + 1
        arg_8 = r10_1
    else
        r10_1 = 4
        arg_8 = 4
    
    if (rdi.b == 0)
        if (rbx == 0 || zx.d(rbx) != 1)
            r9 = 2
    else if (zx.d(rdi.b) != 1)
        r9 = 2
    else
        uint32_t rcx_3 = zx.d(rbx)
        
        if (rbx == 0)
            r9 = 1
        else if (rcx_3 != 1)
            r9 = 2
        else
            r9 = rcx_3 + 2
    
    int32_t arg_c = r9
    int32_t r11_4 = (arg_8.q u>> 0x20).d << 8 | r10_1
    uint64_t* rbx_2
    
    if (*(arg1 + 0xa0) == *(arg1 + 0xcc))
    label_1419a9cd2:
        rbx_2 = sub_141990630(arg1 + 0x98, r11_4, &arg_8)
    else
        void* rcx_5 = *(arg1 + 0xd8)
        void* r8 = arg1 + 0xd0
        
        if (rcx_5 != 0)
            r8 = rcx_5
        
        int32_t rax_6 = *(r8 + (((sx.q(*(arg1 + 0xe0)) - 1) & sx.q(r11_4)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_1419a9cd2_1:
            rbx_2 = sub_141990630(arg1 + 0x98, r11_4, &arg_8)
        else
            int32_t* rdx_6
            
            while (true)
                rdx_6 = (sx.q(rax_6) << 5) + *(arg1 + 0x98)
                
                if (*rdx_6 == r10_1 && rdx_6[1] == r9)
                    break
                
                rax_6 = rdx_6[6]
                
                if (rax_6 == 0xffffffff)
                    goto label_1419a9cd2_2
            
            if (rax_6 == 0xffffffff || rdx_6 == 0)
            label_1419a9cd2_2:
                rbx_2 = sub_141990630(arg1 + 0x98, r11_4, &arg_8)
            else
                rbx_2 = &rdx_6[2]
    
    int32_t rcx_8 = *(rbx_2 + 0xc)
    
    if (rcx_8 s< 8)
        sub_14083ad10(rbx_2, 8)
        rcx_8 = *(rbx_2 + 0xc)
    
    int64_t rdi_1 = sx.q(rbx_2[1].d)
    int32_t rax_8 = (rdi_1 + 1).d
    rbx_2[1].d = rax_8
    
    if (rax_8 s> rcx_8)
        sub_14083a440(rbx_2, rdi_1.d)
    
    result = *rbx_2
    *(result + (rdi_1 << 3)) = arg2
    
    if (r14_1 != 0 && zmm0:9.b == 1 && arg4 == 0)
        result = sub_14198ff30(arg1 + 0x88, &arg_10)
    
    *(arg3 + 0x20) = rax.o

return result
