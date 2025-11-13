// 函数: sub_1417f56a0
// 地址: 0x1417f56a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(data_143f5b298 + 0xb08)

if (rcx != 0 && (*(*rcx + 0x100))(rcx) != 0)
    int64_t* rcx_1 = *(data_143f5b298 + 0xb08)
    int64_t* rax_5 = (*(*rcx_1 + 0x100))(rcx_1)
    int64_t rdx = *rax_5
    int64_t* rax_6 = (*(rdx + 0xb8))(rax_5, rdx)
    
    if (rax_6 != 0)
        TEB* gsbase
        
        if (data_143ef9450
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ef9450)
            
            if (data_143ef9450 == 0xffffffff)
                data_143ef9448 = sub_1417f7400()
                _Init_thread_footer(&data_143ef9450)
        
        uint32_t r8 = -1
        
        if (arg1[1].d == 0)
            void* rax_13 = data_143f5b298
            
            if (rax_13 != 0 && *(rax_13 + 0xb08) != 0)
                r8 = zx.d((*(*rax_6 + 8))(rax_6))
            
            int64_t var_28
            int64_t* rax_16 = sub_140bded20(data_143ef9448, &var_28, r8)
            int16_t* const rbx_1
            
            if (rax_16[1].d == 0)
                rbx_1 = &data_142d40450
            else
                rbx_1 = *rax_16
            
            wchar16 (* result)[0x200] =
                sub_140b1f700(arg3, Spectator screen mode is set to: %s", rbx_1)
            int64_t rcx_15 = var_28
            
            if (rcx_15 == 0)
                return result
            
            return sub_140a74f90(rcx_15)
        
        int64_t* rax_7 = *arg1
        int16_t* const rbx = &data_142d40450
        int16_t* rcx_5
        
        if (rax_7[1].d == 0)
            rcx_5 = &data_142d40450
        else
            rcx_5 = *rax_7
        
        char rax_8 = sub_1417f20a0(rcx_5)
        int64_t* rcx_6 = *arg1
        int32_t rax_9
        
        if (rax_8 == 0)
            int16_t* rdx_3
            
            if (rcx_6[1].d == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *rcx_6
            
            void arg_20
            int64_t* rax_10 = sub_140b58260(&arg_20, rdx_3, 1)
            rax_9 = sub_140bddcb0(data_143ef9448, *rax_10, 0)
        else if (rcx_6[1].d == 0)
            rax_9 = _wtoi(&data_142d40450)
        else
            rax_9 = _wtoi(*rcx_6)
        
        if (rax_9 u> 7)
            int16_t** rax_11 = *arg1
            
            if (rax_11[1].d != 0)
                rbx = *rax_11
            
            sub_140b1f850(arg3, 2, u"Invalid spectator screen mode: %s", rbx)
        
        jump(**rax_6)

int64_t* rbx_2 = *arg1
int16_t* const rbx_3

if (rbx_2[1].d == 0)
    rbx_3 = &data_142d40450
else
    rbx_3 = *rbx_2

return sub_140b1f850(arg3, 2, 
    SpectatorScreenMode is not controllable now, cannot change or get mode.", rbx_3)
