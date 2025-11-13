// 函数: sub_1409c9590
// 地址: 0x1409c9590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r13 = arg4
arg4[1].d = 0
void*** rbp = arg1

if (*(arg4 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg4, 0)

TEB* gsbase
void* r12 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cee328 s> *(r12 + 0x14))
    _Init_thread_header(&data_143cee328)
    
    if (data_143cee328 == 0xffffffff)
        atexit(sub_142cb8310)
        _Init_thread_footer(&data_143cee328)

int32_t rax_2 = data_143cee324
data_143cee320 = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(&data_143cee318, 0)

if (data_143cee340 s> *(r12 + 0x14))
    _Init_thread_header(&data_143cee340)
    
    if (data_143cee340 == 0xffffffff)
        atexit(sub_142cb8830)
        _Init_thread_footer(&data_143cee340)

int32_t rax_4 = data_143cee33c
data_143cee338 = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405dadb0(&data_143cee330, 0)

if (data_143cee358 s> *(r12 + 0x14))
    _Init_thread_header(&data_143cee358)
    
    if (data_143cee358 == 0xffffffff)
        atexit(sub_142cb9b90)
        _Init_thread_footer(&data_143cee358)

int32_t rax_6 = data_143cee354
data_143cee350 = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405dadb0(&data_143cee348, 0)

if (data_143cee370 s> *(r12 + 0x14))
    _Init_thread_header(&data_143cee370)
    
    if (data_143cee370 == 0xffffffff)
        atexit(sub_142cb94b0)
        _Init_thread_footer(&data_143cee370)

int32_t rax_8 = data_143cee36c
data_143cee368 = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_1405dadb0(&data_143cee360, 0)

int128_t zmm6 =
    sub_1409bd560(rbp, arg2, &data_143cee318, &data_143cee330, &data_143cee348, &data_143cee360)

if (data_143cee374 s> *(r12 + 0x14))
    _Init_thread_header(&data_143cee374)
    
    if (data_143cee374 == 0xffffffff)
        atexit(sub_142cb87a0)
        _Init_thread_footer(&data_143cee374)

if (data_143990f48 != data_143990f74)
    int32_t rax_11 = data_143990f4c
    data_143990f48 = 0
    
    if (rax_11 s< 0 && rax_11 != 0)
        sub_140638cc0(&data_143990f40, 0)
    
    data_143990f70 = 0xffffffff
    data_143990f74 = 0
    sub_140774790(&data_143990f50)
    int64_t rcx_3 = sx.q(data_143990f88)
    
    if (rcx_3 s> 0)
        void* rax_12 = data_143990f80
        void* rdi_1 = &data_143990f78
        
        if (rax_12 != 0)
            rdi_1 = rax_12
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_3 << 2)

int32_t rcx_5 = data_143990f48 - data_143990f74
int32_t rdi_3 = data_143cee338 + rcx_5

if (rdi_3 s> rcx_5)
    sub_1407c2fa0(&data_143990f40, rdi_3)
    int32_t rax_16
    
    if (rdi_3 u< 4)
        rax_16 = 1
    else
        uint32_t rdi_4 = rdi_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdi_4 + 8)
        int32_t rcx_6
        
        if (rdi_4 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_1
        
        int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdi_4 + 7)
        
        if (rcx_8 == 0)
            rax_16 = 1
        else
            rax_16 = 1 << ((not.d(rcx_8)).b & (0x20 - (0x1f - temp0_2)))
    
    int32_t rcx_11 = data_143990f88
    
    if (rcx_11 == 0 || rcx_11 s< rax_16)
        data_143990f88 = rax_16
        sub_140771f10(&data_143990f40)

int32_t* i = data_143cee330
int32_t i_9

for (void* rbx = &i[sx.q(data_143cee338)]; i != rbx; i = &i[1])
    int32_t var_60
    sub_1409afd50(&data_143990f40, &var_60)
    int32_t* var_58
    *var_58 = *i
    int32_t rax_19 = var_60
    var_58[1] = 0xffffffff
    sub_1409b8810(&data_143990f40, &i_9, *var_58, var_58, rax_19, nullptr)

int32_t result = *(r12 + 0x14)

if (data_143cee388 s> result)
    result = _Init_thread_header(&data_143cee388)
    
    if (data_143cee388 == 0xffffffff)
        atexit(sub_142cb9d00)
        result = _Init_thread_footer(&data_143cee388)

bool cond:7 = data_143cee384 s>= 0
uint64_t rbx_1 = 0
data_143cee380 = 0

if (not(cond:7))
    result = sub_1405dadb0(&data_143cee378, 0)
    rbx_1 = zx.q(data_143cee380)

if (&data_143cee378 != arg3)
    rbx_1 = sx.q(arg3[1].d)
    int64_t rdi_6 = *arg3
    data_143cee380 = rbx_1.d
    
    if (rbx_1.d != 0 || data_143cee384 != 0)
        sub_140638750(&data_143cee378, rbx_1.d, data_143cee384)
        result = memcpy(data_143cee378, rdi_6, (rbx_1 << 2).d)
        rbx_1 = zx.q(data_143cee380)
    else
        data_143cee384 = 0

if (rbx_1.d s> 1)
    result = sub_140626020(data_143cee378, rbx_1.d)
    rbx_1 = zx.q(data_143cee380)

if (data_143cee368 s> 0)
    if (data_143cee3a0 s> *(r12 + 0x14))
        _Init_thread_header(&data_143cee3a0)
        
        if (data_143cee3a0 == 0xffffffff)
            atexit(sub_142cb8de0)
            _Init_thread_footer(&data_143cee3a0)
        
        rbx_1 = zx.q(data_143cee380)
    
    int32_t rax_21 = data_143cee39c
    int32_t i_11 = data_143cee398
    int64_t* rdi_7 = data_143cee390
    int64_t rsi_1
    
    if (rax_21 s< 0)
        if (i_11 != 0)
            int32_t i_1
            
            do
                int64_t rcx_16 = *rdi_7
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                rdi_7 = &rdi_7[2]
                i_1 = i_11
                i_11 -= 1
            while (i_1 != 1)
            rbx_1 = zx.q(data_143cee380)
            rax_21 = data_143cee39c
        
        rsi_1 = 0
        data_143cee398 = 0
        
        if (rax_21 != 0)
            sub_1405a5410(&data_143cee390, 0)
            rbx_1 = zx.q(data_143cee380)
    else
        if (i_11 != 0)
            int32_t i_2
            
            do
                int64_t rcx_15 = *rdi_7
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                rdi_7 = &rdi_7[2]
                i_2 = i_11
                i_11 -= 1
            while (i_2 != 1)
            rbx_1 = zx.q(data_143cee380)
        
        rsi_1 = 0
        data_143cee398 = 0
    
    int32_t r14_1 = 0
    
    if (data_143cee320 s> 0)
        int128_t var_48_1 = zmm6
        zmm6 = 0x3f800000
        int64_t r15_1 = 0
        
        while (true)
            int64_t rdi_8 = sx.q(*(data_143cee318 + r15_1))
            int32_t r8_7
            
            if (data_143990f48 != data_143990f74)
                void* rax_24 = data_143990f80
                void* rdx_8 = &data_143990f78
                
                if (rax_24 != 0)
                    rdx_8 = rax_24
                
                r8_7 = *(rdx_8 + ((sx.q(data_143990f88 - 1) & rdi_8) << 2))
            
            if (data_143990f48 == data_143990f74 || r8_7 == 0xffffffff)
            label_1409c9a77:
                r8_7 = -1
            else
                int64_t rdx_9 = data_143990f40
                
                while (true)
                    int64_t rcx_19 = sx.q(r8_7) * 3
                    
                    if (*(rdx_9 + (rcx_19 << 2)) == rdi_8.d)
                        break
                    
                    r8_7 = *(rdx_9 + (rcx_19 << 2) + 4)
                    
                    if (r8_7 == 0xffffffff)
                        goto label_1409c9a77
            
            if (r8_7 != 0xffffffff)
                if (data_143cee3b8 s> *(r12 + 0x14))
                    _Init_thread_header(&data_143cee3b8)
                    
                    if (data_143cee3b8 == 0xffffffff)
                        atexit(sub_142cb9d80)
                        _Init_thread_footer(&data_143cee3b8)
                    
                    rbx_1 = zx.q(data_143cee380)
                
                int32_t rsi_2 = data_143cee3b0
                
                if (rbx_1.d s> rsi_2)
                    bool cond:15_1 = rbx_1.d s<= data_143cee3b4
                    rsi_2 = rbx_1.d
                    data_143cee3b0 = rbx_1.d
                    
                    if (not(cond:15_1))
                        sub_1406105e0(&data_143cee3a8)
                        rbx_1 = zx.q(data_143cee380)
                        rsi_2 = data_143cee3b0
                else if (rbx_1.d s< rsi_2)
                    int32_t rbp_2 = rsi_2 - rbx_1.d
                    
                    if (rsi_2 != rbx_1.d)
                        int32_t rax_30 = rsi_2 - rbx_1.d
                        
                        if (rax_30 != rbp_2)
                            int64_t r9_1 = data_143cee3a8
                            memmove(r9_1 + (sx.q(rbx_1.d) << 2), 
                                r9_1 + (sx.q(rbx_1.d + rbp_2) << 2), (rax_30 - rbp_2) << 2)
                            rbx_1 = zx.q(data_143cee380)
                            rsi_2 = data_143cee3b0
                        
                        rsi_2 -= rbp_2
                        data_143cee3b0 = rsi_2
                    
                    rbp = arg1
                
                int32_t i_3 = 0
                
                if (rbx_1.d s> 0)
                    int64_t r8_10 = 0
                    
                    do
                        int64_t rcx_22 = sx.q(rbx_1.d - i_3)
                        i_3 += 1
                        *(data_143cee3a8 + r8_10) = zmm6.d f- *(data_143cee378 + (rcx_22 << 2) - 4)
                        r8_10 += 4
                        rbx_1 = zx.q(data_143cee380)
                    while (i_3 s< rbx_1.d)
                    
                    rsi_2 = data_143cee3b0
                
                int64_t rbx_3 = data_143cee3a8
                data_143cee380 = rsi_2
                
                if (rsi_2 != 0 || data_143cee384 != rsi_2)
                    sub_140638750(&data_143cee378, rsi_2, data_143cee384)
                    memcpy(data_143cee378, rbx_3, rsi_2 << 2)
                else
                    data_143cee384 = 0
            
            if (data_143cee3d0 s> *(r12 + 0x14))
                _Init_thread_header(&data_143cee3d0)
                
                if (data_143cee3d0 == 0xffffffff)
                    atexit(sub_142cb81a0)
                    _Init_thread_footer(&data_143cee3d0)
            
            int32_t rax_37 = data_143cee3cc
            data_143cee3c8 = 0
            
            if (rax_37 s< 0 && rax_37 != 0)
                sub_1405dadb0(&data_143cee3c0, 0)
            
            zmm6 = sub_1409deb00(rbp, rdi_8.d, &data_143cee378, &data_143cee3c0)
            
            if (data_143cee3e8 s> *(r12 + 0x14))
                _Init_thread_header(&data_143cee3e8)
                
                if (data_143cee3e8 == 0xffffffff)
                    atexit(sub_142cb8e40)
                    _Init_thread_footer(&data_143cee3e8)
            
            int64_t r9_2 = sx.q(data_143cee3c8)
            int64_t rbx_4 = sx.q(data_143cee3e0)
            
            if (r9_2.d s> rbx_4.d)
                int32_t i_12 = r9_2.d - rbx_4.d
                int32_t rax_39 = rbx_4.d + i_12
                bool cond:17_1 = rax_39 s<= data_143cee3e4
                data_143cee3e0 = rax_39
                
                if (not(cond:17_1))
                    sub_1405a4cf0(&data_143cee3d8)
                    r9_2 = zx.q(data_143cee3c8)
                
                int32_t* rdx_16 = data_143cee3d8 + (rbx_4 << 2)
                
                if (i_12 != 0)
                    int32_t i_4
                    
                    do
                        *rdx_16 = data_143a1c6b0
                        rdx_16 = &rdx_16[1]
                        i_4 = i_12
                        i_12 -= 1
                    while (i_4 != 1)
                    r9_2 = zx.q(data_143cee3c8)
            else if (r9_2.d s< rbx_4.d)
                int32_t rsi_3 = rbx_4.d
                int32_t rsi_4 = rsi_3 - r9_2.d
                
                if (rsi_3 != r9_2.d)
                    int32_t rax_43 = rbx_4.d - r9_2.d
                    
                    if (rax_43 != rsi_4)
                        int64_t rdi_10 = data_143cee3d8
                        memmove(rdi_10 + (r9_2 << 2), rdi_10 + (sx.q(r9_2.d + rsi_4) << 2), 
                            (rax_43 - rsi_4) << 2)
                        r9_2 = zx.q(data_143cee3c8)
                        rbx_4 = zx.q(data_143cee3e0)
                    
                    data_143cee3e0 = rbx_4.d - rsi_4
            
            int32_t i_5 = 0
            
            if (r9_2.d s> 0)
                int64_t r8_16 = 0
                
                do
                    r8_16 += 4
                    int32_t r9_3 = r9_2.d - i_5
                    i_5 += 1
                    *(data_143cee3d8 + (sx.q(r9_3) << 2) - 4) = *(data_143cee3c0 + r8_16 - 4)
                    r9_2 = zx.q(data_143cee3c8)
                while (i_5 s< r9_2.d)
            
            int64_t rdi_11 = sx.q(data_143cee398)
            int32_t rax_48 = (rdi_11 + 1).d
            bool cond:19_1 = rax_48 s<= data_143cee39c
            data_143cee398 = rax_48
            
            if (not(cond:19_1))
                sub_1405a4f90(&data_143cee390)
            
            int64_t* rdi_13 = (rdi_11 << 4) + data_143cee390
            *rdi_13 = 0
            int64_t rbx_6 = sx.q(data_143cee3e0)
            int64_t rsi_5 = data_143cee3d8
            rdi_13[1].d = rbx_6.d
            
            if (rbx_6.d != 0)
                sub_1405c4a90(rdi_13, rbx_6.d, 0)
                memcpy(*rdi_13, rsi_5, (rbx_6 << 2).d)
                rsi_1 = 0
            else
                rsi_1 = 0
                *(rdi_13 + 0xc) = 0
            
            r14_1 += 1
            r15_1 += 4
            
            if (r14_1 s>= data_143cee320)
                break
            
            rbx_1 = zx.q(data_143cee380)
        
        r13 = arg4
    
    if (data_143cee400 s> *(r12 + 0x14))
        _Init_thread_header(&data_143cee400)
        
        if (data_143cee400 == 0xffffffff)
            atexit(sub_142cb9af0)
            _Init_thread_footer(&data_143cee400)
    
    int32_t i_10 = data_143cee3f8
    
    if (data_143cee3fc s< 0)
        if (i_10 != 0)
            int64_t* rdi_17 = data_143cee3f0 + 8
            int32_t i_6
            
            do
                int64_t rcx_31 = *rdi_17
                
                if (rcx_31 != 0)
                    sub_140a74f90(rcx_31)
                
                rdi_17 = &rdi_17[3]
                i_6 = i_10
                i_10 -= 1
            while (i_6 != 1)
        
        bool cond:11_1 = data_143cee3fc == 0
        data_143cee3f8 = 0
        
        if (not(cond:11_1))
            sub_1405a5130(&data_143cee3f0, 0)
    else
        if (i_10 != 0)
            int64_t* rdi_15 = data_143cee3f0 + 8
            int32_t i_7
            
            do
                int64_t rcx_30 = *rdi_15
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                rdi_15 = &rdi_15[3]
                i_7 = i_10
                i_10 -= 1
            while (i_7 != 1)
        
        data_143cee3f8 = 0
    
    bool cond:12_1 = data_143cee368 s<= 0
    int32_t i_8 = 0
    i_9 = 0
    
    if (not(cond:12_1))
        int64_t r15_2 = 0
        int64_t r13_1 = 0
        
        do
            int64_t rbx_7 = sx.q(data_143cee3f8)
            int32_t rdi_18 = *(data_143cee360 + r13_1)
            int32_t rax_51 = (rbx_7 + 1).d
            bool cond:20_1 = rax_51 s<= data_143cee3fc
            data_143cee3f8 = rax_51
            
            if (not(cond:20_1))
                sub_1405a4df0(&data_143cee3f0)
                i_8 = i_9
            
            int32_t* r8_19 = data_143cee3f0 + rbx_7 * 0x18
            
            if (r8_19 == 0)
                r8_19 = nullptr
            else
                *(r8_19 + 8) = 0
                *(r8_19 + 0x10) = 0
            
            *r8_19 = rdi_18
            int64_t* r12_1 = data_143cee390
            i_9 = i_8 + 1
            int32_t j = 0
            data_143cee320
            int64_t r14_2 = sx.q(mods.dp.d(sx.q(i_8 + 1), data_143cee320))
            
            if (data_143cee380 s> 0)
                do
                    int64_t rbx_8 = sx.q(r8_19[4])
                    int32_t rax_56 = (rbx_8 + 1).d
                    r8_19[4] = rax_56
                    
                    if (rax_56 s> r8_19[5])
                        sub_1405a4d70(&r8_19[2])
                    
                    int32_t* rdx_27 = *(r8_19 + 8) + (rbx_8 << 3)
                    
                    if (rdx_27 != 0)
                        *rdx_27 = data_143a1c6b4
                        rdx_27[1] = data_143a1c6b4
                    
                    j += 1
                    *rdx_27 = *(*(r12_1 + r15_2) + rsi_1)
                    int32_t rcx_36 = *(r12_1[r14_2 * 2] + rsi_1)
                    rsi_1 += 4
                    rdx_27[1] = rcx_36
                while (j s< data_143cee380)
                
                rsi_1 = 0
            
            i_8 = i_9
            r13_1 += 4
            r15_2 += 0x10
        while (i_8 s< data_143cee368)
        
        r13 = arg4
        rbp = arg1
    
    if (data_143cee418 s> *(r12 + 0x14))
        _Init_thread_header(&data_143cee418)
        
        if (data_143cee418 == 0xffffffff)
            atexit(&data_142cb8a60)
            _Init_thread_footer(&data_143cee418)
    
    int32_t rax_62 = data_143cee414
    data_143cee410 = 0
    
    if (rax_62 s< 0 && rax_62 != 0)
        sub_1405dadb0(&data_143cee408, 0)
    
    result = sub_1409e1670(rbp, &data_143cee3f0, &data_143cee408)
    int64_t rdi_20 = sx.q(data_143cee410)
    
    if (rdi_20.d != 0)
        int32_t rax_63 = r13[1].d
        int32_t rdx_28 = rax_63 + rdi_20.d
        
        if (rdx_28 s> *(r13 + 0xc))
            sub_1405dadb0(r13, rdx_28)
            rax_63 = r13[1].d
        
        result = memcpy(*r13 + (sx.q(rax_63) << 2), data_143cee408, (rdi_20 << 2).d)
        r13[1].d += rdi_20.d

return result
