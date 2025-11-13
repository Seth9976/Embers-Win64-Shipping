// 函数: sub_141809180
// 地址: 0x141809180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x18)
int64_t rdi
rdi.b = 0
int64_t* var_38
(*(*rcx + 0xc0))(rcx, &var_38)
int64_t* rcx_1 = var_38
int64_t* rbx = *(arg2 + 0x18)

if (rcx_1 != 0)
    int64_t r10_1 = sx.q((*(*rcx_1 + 0x40))(rcx_1))
    
    if (rbx[0x12].d != *(rbx + 0xbc))
        void* r9_1 = &rbx[0x18]
        void* rdx_10 = *(r9_1 + 8)
        
        if (rdx_10 != 0)
            r9_1 = rdx_10
        
        int32_t i = *(r9_1 + (((sx.q(rbx[0x1a].d) - 1) & r10_1) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_5 = rbx[0x11]
            
            do
                int64_t rdx_11 = sx.q(i) * 3
                
                if (*(r8_5 + (rdx_11 << 2)) == r10_1.d)
                    rdi = 0
                    
                    if (i != 0xffffffff)
                        rdi = 1
                    
                    break
                
                i = *(r8_5 + (rdx_11 << 2) + 4)
            while (i != 0xffffffff)
else
    int32_t rax_2 = (*(*rbx + 0xb8))(rbx)
    
    if (rax_2 == 3)
        rdi = 1
    else if (rax_2 == 2)
        int64_t* rcx_3 = *(arg2 + 0x18)
        int64_t var_28
        int64_t* rax_4 = (*(*rcx_3 + 0x40))(rcx_3, &var_28)
        int16_t* rdx_2
        
        if (rax_4[1].d == 0)
            rdx_2 = &data_142d40450
        else
            rdx_2 = *rax_4
        
        int64_t arg_10
        sub_140b58260(&arg_10, rdx_2, 1)
        int64_t rcx_5 = var_28
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        TEB* gsbase
        
        if (data_143efa080
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143efa080)
            
            if (data_143efa080 == 0xffffffff)
                int128_t var_48
                sub_140b58260(&var_48, &data_142d85f90, 1)
                sub_140b58260(&var_48:8, u"HEAD", 1)
                int32_t var_50_1 = 2
                uint64_t var_58 = 0
                sub_1405c4a00(&var_58, 2, 0)
                *var_58 = var_48
                __builtin_memset(&data_143efa030, 0, 0x2c)
                data_143efa05c = 0x80
                data_143efa060 = 0xffffffff
                data_143efa064 = 0
                data_143efa070 = 0
                data_143efa078 = 0
                sub_1417fdb30(&data_143efa030, &var_58)
                uint64_t rcx_26 = var_58
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                atexit(sub_142cebd70)
                _Init_thread_footer(&data_143efa080)
        
        void* rax_7 = *(arg2 + 0x18)
        int64_t rbx_1
        
        if (*(rax_7 + 0xe0) != *(rax_7 + 0x10c))
        label_1418092e8:
            rbx_1 = arg_10
        label_1418092f0:
            void* rsi_1 = *(arg2 + 0x18)
            *(rsi_1 + 0x10c)
            
            if (*(rsi_1 + 0xe0) != *(rsi_1 + 0x10c))
                int32_t rax_18 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                void* r8_1 = rsi_1 + 0x110
                void* rcx_16 = *(r8_1 + 8)
                
                if (rcx_16 != 0)
                    r8_1 = rcx_16
                
                int32_t i_1 = *(r8_1 + (((sx.q(*(rsi_1 + 0x120)) - 1) & sx.q(rax_18)) << 2))
                
                if (i_1 != 0xffffffff)
                    int64_t rdx_9 = *(rsi_1 + 0xd8)
                    
                    do
                        int64_t rcx_18 = sx.q(i_1) * 2
                        
                        if (*(rdx_9 + (rcx_18 << 3)) == rbx_1)
                            if (i_1 != 0xffffffff)
                                rdi = 1
                            
                            break
                        
                        i_1 = *(rdx_9 + (rcx_18 << 3) + 8)
                    while (i_1 != 0xffffffff)
        else
            rbx_1 = arg_10
            
            if (data_143efa038 == data_143efa064)
                goto label_1418092f0
            
            int32_t rax_11 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* rcx_12 = data_143efa070
            void* rax_13 = &data_143efa068
            
            if (rcx_12 != 0)
                rax_13 = rcx_12
            
            int32_t rax_14 = *(rax_13 + ((sx.q(data_143efa078 - 1) & sx.q(rax_11)) << 2))
            
            if (rax_14 == 0xffffffff)
                goto label_1418092e8
            
            int64_t rdx_5 = data_143efa030
            
            while (true)
                int64_t rcx_14 = sx.q(rax_14) * 2
                
                if (*(rdx_5 + (rcx_14 << 3)) == rbx_1)
                    break
                
                rax_14 = *(rdx_5 + (rcx_14 << 3) + 8)
                
                if (rax_14 == 0xffffffff)
                    goto label_1418092e8
            
            if (rax_14 == 0xffffffff)
                goto label_1418092e8
            
            rdi = 1

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rbp_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t r8_7 = *var_30
            (*(r8_7 + 8))(var_30, 1, r8_7)

return zx.q(rdi.b)
