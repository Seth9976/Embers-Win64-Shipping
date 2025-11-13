// 函数: sub_1420a0840
// 地址: 0x1420a0840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
int64_t* rsi = arg2
(*(*arg2 + 0x1d8))(rsi, &data_1439a9478)
int64_t* rcx_1 = rsi[0xe]
char rax_2

if (rcx_1 != 0 && rdi[9].b != 0)
    rax_2 = (*(*rcx_1 + 0xd8))(rcx_1, 0x11)

int64_t rbx

if (rcx_1 == 0 || rdi[9].b == 0 || rax_2 != 0)
    rbx.b = 0
else
    rbx.b = 1

int64_t* rax_3 = rsi[1]
int32_t* rcx_2 = *rax_3
int64_t rdx = rax_3[1]
int32_t arg_18

if (rbx.b == 0)
    if (&rcx_2[1] u> rdx)
        int32_t rax_7
        rax_7.b = rdi[9].b != 0
        arg_18 = rax_7
        (*(*rsi + 0x150))(rsi, &arg_18, 4)
        rdi[9].b = arg_18 != 0
    else
        void* rax_5
        rax_5.b = *rcx_2 != 0
        rdi[9].b = rax_5.b
        int64_t* rax_6 = rsi[1]
        *rax_6 += 4
else if (&rcx_2[1] u> rdx)
    int64_t rax_4 = *rsi
    arg_18 = 0
    (*(rax_4 + 0x150))(rsi, &arg_18, 4)
else
    *rax_3 = &rcx_2[1]

int64_t* rcx_6 = rsi[1]
int32_t* rdx_3 = *rcx_6

if (&rdx_3[1] u<= rcx_6[1])
    rdi[8].d = *rdx_3
    int64_t* rax_12 = rsi[1]
    *rax_12 += 4
else if ((*(rsi + 0x29) & 0x20) != 0)
    sub_140b54070(rsi, &rdi[8], arg3)
else
    (*(*rsi + 0x150))(rsi, &rdi[8], 4)

int32_t rax_14

if ((rsi[5].b & 1) != 0)
    rax_14, arg3 = sub_140b4e7c0(rsi, &data_1439a9478)

if ((rsi[5].b & 1) == 0 || rax_14 s>= 0x28)
    int64_t* rcx_9 = rsi[1]
    int32_t* r8_1 = *rcx_9
    
    if (&r8_1[1] u<= rcx_9[1])
        *(rdi + 0x44) = *r8_1
        int64_t* rax_17 = rsi[1]
        *rax_17 += 4
    else if ((*(rsi + 0x29) & 0x20) != 0)
        sub_140b54070(rsi, rdi + 0x44, arg3)
    else
        (*(*rsi + 0x150))(rsi, rdi + 0x44, 4)

if ((rsi[5].b & 1) != 0)
    sub_141a00740(rdi, zx.q(rdi[8].d), 0)

int64_t* rcx_12 = *rdi
(*(*rcx_12 + 0x40))(rcx_12, rsi, 0)
int64_t* rcx_13 = rdi[4]
(*(*rcx_13 + 0x40))(rcx_13, rsi, 0)

if (rbx.b == 0)
    int64_t* rcx_33 = rdi[2]
    (*(*rcx_33 + 0x40))(rcx_33, rsi, 0)
else
    int32_t rbx_1 = rdi[8].d
    void** const var_78_1 = &data_14301e080
    int32_t rax_21 = 0
    int32_t rdx_9 = 0
    void* var_68
    __builtin_memset(&var_68, 0, 0x11)
    void** const var_70_1 = &data_14301e040
    
    if (rbx_1 != 0)
        if (rbx_1 s> 0)
            sub_141a147e0(&var_68, rbx_1)
            int32_t var_5c
            rax_21 = var_5c
            int32_t var_60
            rdx_9 = var_60
        
        int32_t var_60_1 = rbx_1
        
        if (rbx_1 s> rax_21)
            sub_141a144e0(&var_68, rdx_9)
    
    int64_t* rcx_16 = rdi[2]
    int16_t* r15_1 = (*(*rcx_16 + 0x30))(rcx_16)
    void* r14_1
    
    if ((var_68.b & 1) == 0)
        r14_1 = var_68
    else
        r14_1 = &var_68 + (var_68 s>> 1)
    
    if (rdi[8].d s> 0)
        uint64_t r12_1 = zx.q(data_14401b1a0)
        int32_t i = 0
        TEB* gsbase
        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        
        do
            uint32_t rbx_2 = zx.d(*r15_1)
            int32_t rdi_3 = (rbx_2 & 0xffff8000) << 0x10
            int16_t rax_24 = rbx_2.w & 0x7c00
            
            if (rax_24 == 0)
                int32_t rbx_3 = rbx_2 & 0x3ff
                
                if (rbx_3 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_11 = 0xa - int.d(logf(float.s(zx.q(rbx_3))) f* data_143cda910)
                    arg_18 = (rbx_3 << (rdx_11.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_11) << 0x17 & 0x7f800000) | rdi_3
                else
                    arg_18 = rdi_3
            else if (rax_24 != 0x7c00)
                arg_18 = ((rbx_2 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_2 & 0x3ff) << 0xd | rdi_3
            else
                arg_18 = rdi_3 | 0x477fe000
            
            *r14_1 = arg_18
            uint32_t rbx_10 = zx.d(r15_1[1])
            int32_t rdi_7 = (rbx_10 & 0xffff8000) << 0x10
            int16_t rax_39 = rbx_10.w & 0x7c00
            
            if (rax_39 == 0)
                int32_t rbx_11 = rbx_10 & 0x3ff
                
                if (rbx_11 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_12 = 0xa - int.d(logf(float.s(zx.q(rbx_11))) f* data_143cda910)
                    arg_18 = (rbx_11 << (rdx_12.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_12) << 0x17 & 0x7f800000) | rdi_7
                else
                    arg_18 = rdi_7
            else if (rax_39 != 0x7c00)
                arg_18 = ((rbx_10 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_10 & 0x3ff) << 0xd | rdi_7
            else
                arg_18 = rdi_7 | 0x477fe000
            
            *(r14_1 + 4) = arg_18
            uint32_t rbx_18 = zx.d(r15_1[2])
            int32_t rdi_11 = (rbx_18 & 0xffff8000) << 0x10
            int16_t rax_54 = rbx_18.w & 0x7c00
            
            if (rax_54 == 0)
                int32_t rbx_19 = rbx_18 & 0x3ff
                
                if (rbx_19 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_13 = 0xa - int.d(logf(float.s(zx.q(rbx_19))) f* data_143cda910)
                    arg_18 = (rbx_19 << (rdx_13.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_13) << 0x17 & 0x7f800000) | rdi_11
                else
                    arg_18 = rdi_11
            else if (rax_54 != 0x7c00)
                arg_18 = ((rbx_18 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_18 & 0x3ff) << 0xd | rdi_11
            else
                arg_18 = rdi_11 | 0x477fe000
            
            *(r14_1 + 8) = arg_18
            uint32_t rbx_26 = zx.d(r15_1[3])
            int32_t rdi_15 = (rbx_26 & 0xffff8000) << 0x10
            int16_t rax_69 = rbx_26.w & 0x7c00
            
            if (rax_69 == 0)
                int32_t rbx_27 = rbx_26 & 0x3ff
                
                if (rbx_27 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_14 = 0xa - int.d(logf(float.s(zx.q(rbx_27))) f* data_143cda910)
                    arg_18 = (rbx_27 << (rdx_14.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_14) << 0x17 & 0x7f800000) | rdi_15
                else
                    arg_18 = rdi_15
            else if (rax_69 != 0x7c00)
                arg_18 = ((rbx_26 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_26 & 0x3ff) << 0xd | rdi_15
            else
                arg_18 = rdi_15 | 0x477fe000
            
            *(r14_1 + 0xc) = arg_18
            uint32_t rbx_34 = zx.d(r15_1[4])
            int32_t rdi_19 = (rbx_34 & 0xffff8000) << 0x10
            int16_t rax_84 = rbx_34.w & 0x7c00
            
            if (rax_84 == 0)
                int32_t rbx_35 = rbx_34 & 0x3ff
                
                if (rbx_35 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_15 = 0xa - int.d(logf(float.s(zx.q(rbx_35))) f* data_143cda910)
                    arg_18 = (rbx_35 << (rdx_15.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_15) << 0x17 & 0x7f800000) | rdi_19
                else
                    arg_18 = rdi_19
            else if (rax_84 != 0x7c00)
                arg_18 = ((rbx_34 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_34 & 0x3ff) << 0xd | rdi_19
            else
                arg_18 = rdi_19 | 0x477fe000
            
            *(r14_1 + 0x10) = arg_18
            uint32_t rbx_42 = zx.d(r15_1[5])
            int32_t rdi_23 = (rbx_42 & 0xffff8000) << 0x10
            int16_t rax_99 = rbx_42.w & 0x7c00
            
            if (rax_99 == 0)
                int32_t rbx_43 = rbx_42 & 0x3ff
                
                if (rbx_43 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_16 = 0xa - int.d(logf(float.s(zx.q(rbx_43))) f* data_143cda910)
                    arg_18 = (rbx_43 << (rdx_16.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_16) << 0x17 & 0x7f800000) | rdi_23
                else
                    arg_18 = rdi_23
            else if (rax_99 != 0x7c00)
                arg_18 = ((rbx_42 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_42 & 0x3ff) << 0xd | rdi_23
            else
                arg_18 = rdi_23 | 0x477fe000
            
            *(r14_1 + 0x14) = arg_18
            uint32_t rbx_50 = zx.d(r15_1[6])
            int32_t rdi_27 = (rbx_50 & 0xffff8000) << 0x10
            int16_t rax_114 = rbx_50.w & 0x7c00
            
            if (rax_114 == 0)
                int32_t rbx_51 = rbx_50 & 0x3ff
                
                if (rbx_51 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_17 = 0xa - int.d(logf(float.s(zx.q(rbx_51))) f* data_143cda910)
                    arg_18 = (rbx_51 << (rdx_17.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_17) << 0x17 & 0x7f800000) | rdi_27
                else
                    arg_18 = rdi_27
            else if (rax_114 != 0x7c00)
                arg_18 = ((rbx_50 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_50 & 0x3ff) << 0xd | rdi_27
            else
                arg_18 = rdi_27 | 0x477fe000
            
            *(r14_1 + 0x18) = arg_18
            uint32_t rbx_58 = zx.d(r15_1[7])
            int32_t rdi_31 = (rbx_58 & 0xffff8000) << 0x10
            int16_t rax_129 = rbx_58.w & 0x7c00
            
            if (rax_129 == 0)
                int32_t rbx_59 = rbx_58 & 0x3ff
                
                if (rbx_59 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_18 = 0xa - int.d(logf(float.s(zx.q(rbx_59))) f* data_143cda910)
                    arg_18 = (rbx_59 << (rdx_18.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_18) << 0x17 & 0x7f800000) | rdi_31
                else
                    arg_18 = rdi_31
            else if (rax_129 != 0x7c00)
                arg_18 = ((rbx_58 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_58 & 0x3ff) << 0xd | rdi_31
            else
                arg_18 = rdi_31 | 0x477fe000
            
            *(r14_1 + 0x1c) = arg_18
            uint32_t rbx_66 = zx.d(r15_1[8])
            int32_t rdi_35 = (rbx_66 & 0xffff8000) << 0x10
            int16_t rax_144 = rbx_66.w & 0x7c00
            
            if (rax_144 == 0)
                int32_t rbx_67 = rbx_66 & 0x3ff
                
                if (rbx_67 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_19 = 0xa - int.d(logf(float.s(zx.q(rbx_67))) f* data_143cda910)
                    arg_18 = (rbx_67 << (rdx_19.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_19) << 0x17 & 0x7f800000) | rdi_35
                else
                    arg_18 = rdi_35
            else if (rax_144 != 0x7c00)
                arg_18 = ((rbx_66 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_66 & 0x3ff) << 0xd | rdi_35
            else
                arg_18 = rdi_35 | 0x477fe000
            
            *(r14_1 + 0x20) = arg_18
            uint32_t rbx_74 = zx.d(r15_1[9])
            int32_t rdi_39 = (rbx_74 & 0xffff8000) << 0x10
            int16_t rax_159 = rbx_74.w & 0x7c00
            
            if (rax_159 == 0)
                int32_t rbx_75 = rbx_74 & 0x3ff
                
                if (rbx_75 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_20 = 0xa - int.d(logf(float.s(zx.q(rbx_75))) f* data_143cda910)
                    arg_18 = (rbx_75 << (rdx_20.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_20) << 0x17 & 0x7f800000) | rdi_39
                else
                    arg_18 = rdi_39
            else if (rax_159 != 0x7c00)
                arg_18 = ((rbx_74 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_74 & 0x3ff) << 0xd | rdi_39
            else
                arg_18 = rdi_39 | 0x477fe000
            
            *(r14_1 + 0x24) = arg_18
            uint32_t rbx_82 = zx.d(r15_1[0xa])
            int32_t rdi_43 = (rbx_82 & 0xffff8000) << 0x10
            int16_t rax_174 = rbx_82.w & 0x7c00
            
            if (rax_174 == 0)
                int32_t rbx_83 = rbx_82 & 0x3ff
                
                if (rbx_83 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_21 = 0xa - int.d(logf(float.s(zx.q(rbx_83))) f* data_143cda910)
                    arg_18 = (rbx_83 << (rdx_21.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_21) << 0x17 & 0x7f800000) | rdi_43
                else
                    arg_18 = rdi_43
            else if (rax_174 != 0x7c00)
                arg_18 = ((rbx_82 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_82 & 0x3ff) << 0xd | rdi_43
            else
                arg_18 = rdi_43 | 0x477fe000
            
            *(r14_1 + 0x28) = arg_18
            uint32_t rbx_90 = zx.d(r15_1[0xb])
            int32_t rdi_47 = (rbx_90 & 0xffff8000) << 0x10
            int16_t rax_189 = rbx_90.w & 0x7c00
            
            if (rax_189 == 0)
                int32_t rbx_91 = rbx_90 & 0x3ff
                
                if (rbx_91 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_22 = 0xa - int.d(logf(float.s(zx.q(rbx_91))) f* data_143cda910)
                    arg_18 = (rbx_91 << (rdx_22.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_22) << 0x17 & 0x7f800000) | rdi_47
                else
                    arg_18 = rdi_47
            else if (rax_189 != 0x7c00)
                arg_18 = ((rbx_90 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_90 & 0x3ff) << 0xd | rdi_47
            else
                arg_18 = rdi_47 | 0x477fe000
            
            r15_1 = &r15_1[0xc]
            i += 1
            *(r14_1 + 0x2c) = arg_18
            r14_1 += 0x30
        while (i s< rdi[8].d)
        
        rsi = arg2
        rdi = arg1
    
    sub_141a04cb0(&var_68, rsi, 0, arg3)
    sub_140a1d5c0(&var_68)

uint64_t result

if ((rsi[5].b & 1) != 0)
    result = sub_140b4e7c0(rsi, &data_1439a9478)

if ((rsi[5].b & 1) == 0 || result.d s>= 0x28)
    int64_t* rcx_35 = rdi[6]
    result = (*(*rcx_35 + 0x40))(rcx_35, rsi, 0)

if ((rsi[5].b & 1) != 0)
    int64_t* rcx_36 = *rdi
    int64_t rax_208 = (*(*rcx_36 + 0x30))(rcx_36)
    int64_t* rcx_37 = rdi[4]
    rdi[1] = rax_208
    int64_t rax_210 = (*(*rcx_37 + 0x30))(rcx_37)
    int64_t* rcx_38 = rdi[2]
    rdi[5] = rax_210
    int64_t rax_212 = (*(*rcx_38 + 0x30))(rcx_38)
    int64_t* rcx_39 = rdi[6]
    rdi[3] = rax_212
    result = (*(*rcx_39 + 0x30))(rcx_39)
    rdi[7] = result

return result
