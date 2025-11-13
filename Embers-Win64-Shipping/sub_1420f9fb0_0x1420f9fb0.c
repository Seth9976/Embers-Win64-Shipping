// 函数: sub_1420f9fb0
// 地址: 0x1420f9fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t rsi = 0
int32_t rbx = data_143f0f1a0

if (*(arg6 + 0xa1) != 0 && arg5 s> 1)
    if (sub_1419d5c70(rbx) != 0)
        goto label_1420fa01a
    
    goto label_1420fa00d

label_1420fa00d:
int32_t result = sub_1411a4ac0(rbx, arg5)
TEB* gsbase

if (result.b != 0)
label_1420fa01a:
    int64_t rdi_1 = arg8
    
    if (rdi_1 == 0)
        rdi_1 = *(arg6 + 0x200)
    
    int64_t r11_1 = sx.q(*(arg4 + 0xe0))
    int32_t r8 = 0
    
    if (r11_1 s> 0)
        int64_t rdx_1 = 0
        
        while (true)
            void* rcx_3 = *(arg4 + 0xd8)
            
            if ((*(arg4 + 0xd8) & 1) != 0)
                rcx_3 = (rcx_3 s>> 1) + arg4 + 0xd8
            
            if (*(rcx_3 + (rdx_1 << 3)) == data_143f48560)
                break
            
            r8 += 1
            rdx_1 += 1
            
            if (rdx_1 s>= r11_1)
                goto label_1420fa09e
    
    int16_t* rdx_2
    
    if (r11_1 s<= 0 || r8 == 0xffffffff)
    label_1420fa09e:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
        
        rdx_2 = &data_143ce8560
    else
        void* rcx_16 = *(arg4 + 0xe8)
        
        if ((rcx_16.b & 1) != 0)
            rcx_16 = (rcx_16 s>> 1) + arg4 + 0xe8
        
        rdx_2 = rcx_16 + (sx.q(r8) << 1)
    
    result = sub_14108daf0(arg9, rdx_2, rdi_1)

int32_t var_38

if ((*(arg7 + 0x64) & 0x100) != 0)
    void* rbx_2 = *(arg7 + 0x20)
    
    if (*(arg6 + 0xa1) == 0 || arg5 s<= 1)
    label_1420fa0fc:
        int64_t rcx_8 = *(rbx_2 + 0x10)
        void* rbx_3 = arg10
        var_38 = *(arg6 + 0x208) & 0xf
        int64_t rdi_2 = sx.q(*(rbx_3 + 0x38))
        int32_t rax_7 = (rdi_2 + 1).d
        *(rbx_3 + 0x38) = rax_7
        
        if (rax_7 s> *(rbx_3 + 0x3c))
            sub_1419d6df0(rbx_3, rdi_2.d)
        
        void* rax_8 = *(rbx_3 + 0x30)
        int64_t rcx_10 = rdi_2 * 3
        
        if (rax_8 != 0)
            rbx_3 = rax_8
        
        result = rcx_8:4.d
        *(rbx_3 + (rcx_10 << 2)) = var_38.q
        *(rbx_3 + (rcx_10 << 2) + 8) = result
    else
        result = sub_1419d5c70(data_143f0f1a0)
        
        if (result.b == 0)
            goto label_1420fa0fc

void* rdi_3 = arg_8

if (*(rdi_3 + 0xa) != 0)
    int64_t rax_10
    int64_t rbx_4
    
    if (arg2 != 0)
        rax_10 = (*(*arg2 + 0x220))(arg2, arg6)
        rbx_4 = rax_10
    
    if (arg2 == 0 || rax_10 == 0)
        rbx_4 = data_143a2e4e8
    
    int64_t r10_2 = sx.q(*(arg4 + 0xe0))
    
    if (r10_2 s> 0)
        int64_t rdx_5 = 0
        
        while (true)
            void* rcx_13 = *(arg4 + 0xd8)
            
            if ((*(arg4 + 0xd8) & 1) != 0)
                rcx_13 = (rcx_13 s>> 1) + arg4 + 0xd8
            
            if (*(rcx_13 + (rdx_5 << 3)) == data_143f59570)
                break
            
            rsi += 1
            rdx_5 += 1
            
            if (rdx_5 s>= r10_2)
                goto label_1420fa1ee
    
    void* rdx_8
    
    if (r10_2 s<= 0 || rsi == 0xffffffff)
    label_1420fa1ee:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
        
        rdx_8 = &data_143ce8560
    else
        void* rcx_18 = *(arg4 + 0xe8)
        
        if ((rcx_18.b & 1) != 0)
            rcx_18 = (rcx_18 s>> 1) + arg4 + 0xe8
        
        rdx_8 = rcx_18 + (sx.q(rsi) << 1)
    
    result = sub_14108daf0(arg9, rdx_8, rbx_4)
    
    if (*(rdi_3 + 8) u> 0)
        int64_t zmm0 = *(arg7 + 0x60)
        int32_t zmm1 = *(arg7 + 0x5c)
        int64_t var_34
        var_34.d = zmm0.d
        zmm0.d = zmm0.d f- zmm1
        arg_8.d = *(rdi_3 + 4)
        int16_t rax_15 = *(rdi_3 + 8)
        var_38 = zmm1
        arg_8:4.w = rax_15
        var_34:4.d = zmm0.d
        return sub_141211d90(arg9, &arg_8, &var_38)

return result
