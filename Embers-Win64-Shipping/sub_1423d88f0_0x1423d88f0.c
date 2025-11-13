// 函数: sub_1423d88f0
// 地址: 0x1423d88f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* rcx = arg1[6]
int64_t* rax_3 = (*(*rcx + 0x30))(rcx)
int64_t* r12 = rax_3
int64_t* var_180 = rax_3
uint32_t result = 0x14
TEB* gsbase
void* r15 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f5b5c0 s> *(r15 + 0x14))
    arg3 = _Init_thread_header(&data_143f5b5c0)
    
    if (data_143f5b5c0 == 0xffffffff)
        atexit(sub_142d10200)
        arg3 = _Init_thread_footer(&data_143f5b5c0)
    
    result = 0x14

if (data_143f5b5c4 == 0)
    int32_t rax_4
    
    if (data_143f5b5d0 s> *(r15 + 0x14))
        rax_4, arg3 = _Init_thread_header(&data_143f5b5d0)
        
        if (data_143f5b5d0 == 0xffffffff)
            int64_t* rcx_39 = data_143db18d0
            
            if (rcx_39 == 0)
                sub_140a53c40()
                rcx_39 = data_143db18d0
            
            int64_t* rax_43 = (*(*rcx_39 + 0xb0))(rcx_39, u"r.BufferVisualizationDumpFrames", 1)
            int64_t rax_44
            
            if (rax_43 == 0)
                rax_44 = 0
            else
                int64_t rdx_21 = *rax_43
                rax_44 = (*(rdx_21 + 0x58))(rax_43, rdx_21)
            
            data_143f5b5c8 = rax_44
            rax_4, arg3 = _Init_thread_footer(&data_143f5b5d0)
    
    if (data_143de5438 != 0 || *(arg1 + 0xc4) != 0)
        rax_4.b = 1
    else
        rax_4.b = 0
    
    bool cond:0_1 = data_143f5b2a0 != 0
    data_143de5438 = rax_4.b
    int64_t rdi
    int64_t r14
    
    if (cond:0_1 || rax_4.b != 0 || data_143de5434 != 0)
        int32_t* rax_7 = data_143f5b5c8
        r14.b = 1
        
        if (rax_7 == 0 || *rax_7 == 0)
            rdi.b = 0
        else
            rdi = 1
    else
        r14.b = 0
        rdi.b = 0
    
    if (data_143f5b280 != 0)
        char* rax_5
        rax_5, arg3 = j_sub_140a82f30(3)
        char* rax_6
        
        if (rax_5 == 0)
            rax_6 = nullptr
        else
            rax_6, arg3 = sub_141992c00(rax_5, 1)
        
        char* rbx_1 = data_143f5b5b8
        data_143f5b5b8 = rax_6
        
        if (rbx_1 != 0)
            sub_141994c70(rbx_1)
            arg3 = j_sub_140a74f90(rbx_1)
    
    char rax_8
    
    if (r12 != 0)
        rax_8 = sub_14243ade0(r12)
    
    if (r12 == 0 || rax_8 == 0 || data_143a30290 != 0)
        int64_t performanceCount
        int64_t var_188
        
        if (data_143de5438 != 0)
            sub_142090dd0()
            performanceCount = 0
            var_188 = 0
            sub_1423ee750(&performanceCount, 0, data_143a2e380 s<= 1)
            int64_t performanceCount_1 = performanceCount
            
            if (performanceCount_1 != 0)
                sub_140a74f90(performanceCount_1)
            
            arg3 = sub_1423e0100(arg1)
        else if (r14.b != 0 && rdi.b != 0)
            performanceCount = 0
            var_188 = 0
            arg3 = sub_1423ee750(&performanceCount, 0, 1)
            int64_t performanceCount_2 = performanceCount
            
            if (performanceCount_2 != 0)
                arg3 = sub_140a74f90(performanceCount_2)
        
        if (arg1[0x15].d u> 0 && *(arg1 + 0xac) u> 0)
            if (data_143f5b5e0 s> *(r15 + 0x14))
                int64_t r8_5
                r8_5, arg3 = _Init_thread_header(&data_143f5b5e0)
                
                if (data_143f5b5e0 == 0xffffffff)
                    int64_t* rcx_41 = data_143db18d0
                    
                    if (rcx_41 == 0)
                        sub_140a53c40()
                        rcx_41 = data_143db18d0
                    
                    r8_5.b = 1
                    int64_t* rax_46 = (*(*rcx_41 + 0xb0))(rcx_41, u"r.VSync", r8_5)
                    int64_t rax_41
                    
                    if (rax_46 == 0)
                        rax_41 = 0
                    else
                        int64_t rdx_22 = *rax_46
                        rax_41 = (*(rdx_22 + 0x58))(rax_46, rdx_22)
                    
                    data_143f5b5d8 = rax_41
                    arg3 = _Init_thread_footer(&data_143f5b5e0)
            
            void* rcx_11 = data_143f5b298
            r15.b = *data_143f5b5d8 != 0
            
            if (rcx_11 != 0 && r12 != 0)
                int64_t* rax_11
                rax_11, arg3 = sub_1423dd2a0(rcx_11, r12)
                
                if (rax_11[1].d != 0)
                    void* rax_13 = **rax_11
                    
                    if (rax_13 != 0)
                        void* rax_14 = *(rax_13 + 0x30)
                        
                        if (rax_14 != 0 && (*(rax_14 + 0x3d0) & 2) != 0)
                            r15.b = 1
            
            (*(*arg1 + 0x138))(arg1, zx.q(arg2))
            
            if (data_143de5458 != data_143a30360)
                QueryPerformanceCounter(&performanceCount)
                char var_198 = 0
                char* var_168_1 = &var_198
                void*** (* var_170)() = sub_140a3f720
                void* rax_17
                rax_17, arg3 = sub_140a756e0(&var_170, &data_14399e8cc)
                int32_t performanceCount_3 = performanceCount.d
                
                if (data_143f5b5e8 == 0)
                    data_143f5b5e8 = 1
                else
                    int32_t r9_2 = performanceCount_3 - data_143f5b5e4
                    int32_t rdx_6 = r9_2 - *(rax_17 + 0x10)
                    
                    if (r9_2 u<= *(rax_17 + 0x10))
                        rdx_6 = r9_2
                    
                    data_143f138ec = rdx_6
                
                data_143a30360 = data_143de5458
                data_143f5b5e4 = performanceCount_3
                *(rax_17 + 0x10) = 0
            
            int64_t* rcx_15 = arg1[6]
            void* rax_20 = (*(*rcx_15 + 0x30))(rcx_15)
            int64_t* rcx_16 = arg1[6]
            int64_t rdx_7 = *rcx_16
            
            if ((*(rdx_7 + 0x1b8))(rcx_16, rdx_7) == 0)
                arg3 = 0x3f800000
            else
                int64_t* rcx_17 = arg1[6]
                int64_t rdx_8 = *rcx_17
                (*(rdx_8 + 0x1c0))(rcx_17, rdx_8)
            
            uint32_t rax_22
            
            if (rax_20 == 0)
                rax_22 = data_1439c7a08
            else
                rax_22 = zx.d(*(rax_20 + 0x118))
            
            void var_158
            sub_1423fa990(&var_158, arg1, 0, rax_20, rax_22, 0, arg3)
            var_188.d = arg1[0x15].d
            var_188:4.d = *(arg1 + 0xac)
            performanceCount = 0
            sub_142420170(&var_158, &performanceCount)
            int64_t* rcx_20 = arg1[6]
            char var_cb_1 = 1
            (*(*rcx_20 + 0x20))(rcx_20, arg1, &var_158)
            sub_14240e030(&var_158, 0)
            r14.b = 0
            int32_t rdx_12 = data_143a2e098
            int32_t rcx_23 = data_143a2e0a4 + 1
            data_143a2e0a4 = rcx_23
            int64_t rdi_1 = sx.q(rdx_12 - 1)
            
            if (rdx_12 - 1 s>= 0)
                int64_t rbx_4 = rdi_1 << 4
                int64_t temp1_1
                
                do
                    int64_t rcx_24 = data_143a2e090
                    
                    if (*(rbx_4 + rcx_24 + 8) == 0)
                        r14.b = 1
                    else
                        int64_t* rcx_25 = *(rbx_4 + rcx_24)
                        
                        if (rcx_25 == 0)
                            r14.b = 1
                        else if ((*(*rcx_25 + 0x50))(rcx_25, arg1) == 0)
                            r14.b = 1
                    
                    rbx_4 -= 0x10
                    temp1_1 = rdi_1
                    rdi_1 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_23 = data_143a2e0a4
                rdx_12 = data_143a2e098
            
            data_143a2e0a4 = rcx_23 - 1
            
            if (r14.b != 0 && rcx_23 - 1 s<= 0)
                int32_t rdi_2 = 0
                int32_t r14_1 = rdx_12
                
                if (rdx_12 s> 0)
                    int64_t* rbx_5 = nullptr
                    
                    do
                        int64_t rcx_26 = data_143a2e090
                        
                        if (*(rbx_5 + rcx_26 + 8) == 0)
                            sub_1405a4880(&data_143a2e090, rdi_2, 1, 1)
                        else
                            int64_t* rcx_27 = *(rbx_5 + rcx_26)
                            
                            if (rcx_27 == 0)
                                sub_1405a4880(&data_143a2e090, rdi_2, 1, 1)
                            else if ((*(*rcx_27 + 0x20))(rcx_27) != 0)
                                sub_1405a4880(&data_143a2e090, rdi_2, 1, 1)
                            else
                                rdi_2 += 1
                                rbx_5 = &rbx_5[2]
                        
                        rdx_12 = data_143a2e098
                    while (rdi_2 s< rdx_12)
                    
                    r12 = var_180
                
                int32_t rax_32 = rdx_12 * 2
                
                if (rax_32 s<= 2)
                    rax_32 = 2
                
                data_143a2e0a0 = rax_32
                
                if (r14_1 s> rax_32 && data_143a2e09c != rdx_12)
                    sub_1405a5410(&data_143a2e090, rdx_12)
            
            int64_t* rcx_28 = arg1[6]
            (*(*rcx_28 + 0x28))(rcx_28, arg1)
            (*(*arg1 + 0x128))(arg1, zx.q(r15.b))
            (*(*arg1 + 0x140))(arg1, zx.q(r15.b), zx.q(arg2))
            data_1439c90f9 = 0
            sub_1423fef60(&var_158)
    else
        sub_14244a470(r12)
    
    if (r12 != 0)
        sub_1424373a0(r12, &var_180)
        int32_t i_1
        int32_t i = i_1
        
        while (i s>= 0)
            int64_t* rdx_19 = var_180
            
            if (i s>= rdx_19[1].d)
                break
            
            void* rax_37 = sub_140d3c6e0(*rdx_19 + (sx.q(i) << 3))
            
            if (rax_37 != 0)
                void* rax_38 = *(rax_37 + 0x2b8)
                
                if (rax_38 != 0)
                    *(rax_38 + 0x2710) &= 0xfffffbff
            
            i = i_1 + 1
            i_1 = i
    
    result = data_143f5b2a8
    
    if (result s> 0)
        bool cond:1_1 = result == 1
        data_143f5b2a8 = result - 1
        result = zx.d(data_143a30290)
        
        if (cond:1_1)
            result = 1
        
        data_143a30290 = result.b
    
    if (data_143f5b280 != 0)
        char* rbx_6 = data_143f5b5b8
        
        if (rbx_6 != 0)
            data_143f5b5b8 = 0
            sub_141994c70(rbx_6)
            result = j_sub_140a74f90(rbx_6)
        
        data_143f5b280 = 0

__security_check_cookie(rax_1 ^ &var_1d8)
return result
