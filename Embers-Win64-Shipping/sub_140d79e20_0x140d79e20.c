// 函数: sub_140d79e20
// 地址: 0x140d79e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rsi = 1
int64_t rbx

if (arg1[1].d - *(arg1 + 0x34) == 1)
    rbx = zx.q(arg5)
label_140d79ed8:
    int32_t r8_1 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_1 u>= 4)
        uint32_t rax_5 = r8_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_5 + 8)
        int32_t rcx_4
        
        if (rax_5 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_5 + 7)
        char r9
        
        if (rax_5 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rsi = 1 << ((not.d(rcx_4 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_8
    
    if (r8_1 s> 0)
        rax_8 = arg1[9].d
    
    if (r8_1 s> 0 && (rax_8 == 0 || rax_8 s< rsi))
        arg1[9].d = rsi
        sub_1405c0420(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & arg3
        *(arg4 + 0x14) = rax_11
        void* rdx_4 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_11)
        void* rax_12 = r9_1
        
        if (rdx_4 != 0)
            rax_12 = rdx_4
        
        arg4[2].d = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_14 = *(r9_1 + 8)
        
        if (rax_14 != 0)
            r9_1 = rax_14
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rbx.d
else
    int32_t arg_8
    void __cdecl std::_Pop_heap_hole_by_index<struct SC *, struct SC, bool (__cdecl *)(struct SC const &, struct SC const &)>(struct SC *, __int64, __int64, struct SC &&, bool (__cdecl *)(struct SC const &, struct SC const &))(
        arg1, &arg_8, arg3, arg4)
    rbx = sx.q(arg_8)
    rbp.b = rbx.d != 0xffffffff
    
    if (rbx.d == 0xffffffff)
        rbx = zx.q(arg5)
    else
        int64_t rax_2 = *arg1
        int64_t rcx = rbx * 3
        int64_t* rcx_1 = *(rax_2 + (rcx << 3) + 8)
        
        if (rcx_1 != 0)
            int32_t temp1_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        memmove(rax_2 + (rcx << 3), arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
    
    if (rbp.b == 0)
        goto label_140d79ed8

*arg2 = rbx.d

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
