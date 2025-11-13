// 函数: sub_1418a3a50
// 地址: 0x1418a3a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143efac88 s> *rdi_1)
    _Init_thread_header(&data_143efac88)
    
    if (data_143efac88 == 0xffffffff)
        _vfprintf_p_l(&data_143efac70, u"The operation was successful.", u"BuildPatchInstallError")
        atexit(sub_142cec660)
        _Init_thread_footer(&data_143efac88)

if (data_143efaca8 s> *rdi_1)
    _Init_thread_header(&data_143efaca8)
    
    if (data_143efaca8 == 0xffffffff)
        _vfprintf_p_l(&data_143efac90, 
            Could not download patch data. Please check your internet connection, and try again.", 
            BuildPatchInstallError")
        atexit(sub_142cec4d0)
        _Init_thread_footer(&data_143efaca8)

if (data_143efacc8 s> *rdi_1)
    _Init_thread_header(&data_143efacc8)
    
    if (data_143efacc8 == 0xffffffff)
        _vfprintf_p_l(&data_143efacb0, A file corruption has occurred. Please try again.", 
            BuildPatchInstallError")
        atexit(sub_142cec520)
        _Init_thread_footer(&data_143efacc8)

if (data_143eface8 s> *rdi_1)
    _Init_thread_header(&data_143eface8)
    
    if (data_143eface8 == 0xffffffff)
        _vfprintf_p_l(&data_143efacd0, 
            A file access error has occurred. Please check your running processes.", 
            BuildPatchInstallError")
        atexit(sub_142cec610)
        _Init_thread_footer(&data_143eface8)

if (data_143efad08 s> *rdi_1)
    _Init_thread_header(&data_143efad08)
    
    if (data_143efad08 == 0xffffffff)
        _vfprintf_p_l(&data_143efacf0, The installation is corrupt. Please contact support.", 
            BuildPatchInstallError")
        atexit(sub_142cec480)
        _Init_thread_footer(&data_143efad08)

if (data_143efad28 s> *rdi_1)
    _Init_thread_header(&data_143efad28)
    
    if (data_143efad28 == 0xffffffff)
        _vfprintf_p_l(&data_143efad10, u"The application is closing.", u"BuildPatchInstallError")
        atexit(sub_142cec3e0)
        _Init_thread_footer(&data_143efad28)

if (data_143efad48 s> *rdi_1)
    _Init_thread_header(&data_143efad48)
    
    if (data_143efad48 == 0xffffffff)
        _vfprintf_p_l(&data_143efad30, Patching service could not start. Please contact support.", 
            BuildPatchInstallError")
        atexit(sub_142cec430)
        _Init_thread_footer(&data_143efad48)

if (data_143efad68 s> *rdi_1)
    _Init_thread_header(&data_143efad68)
    
    if (data_143efad68 == 0xffffffff)
        _vfprintf_p_l(&data_143efad50, u"User cancelled.", u"BuildPatchInstallError")
        atexit(sub_142cec7f0)
        _Init_thread_footer(&data_143efad68)

if (data_143efad88 s> *rdi_1)
    _Init_thread_header(&data_143efad88)
    
    if (data_143efad88 == 0xffffffff)
        _vfprintf_p_l(&data_143efad70, 
            The necessary prerequisites have failed to install. Please contact support.", 
            BuildPatchInstallError")
        atexit(sub_142cec7a0)
        _Init_thread_footer(&data_143efad88)

if (data_143efada8 s> *rdi_1)
    _Init_thread_header(&data_143efada8)
    
    if (data_143efada8 == 0xffffffff)
        _vfprintf_p_l(&data_143efad90, 
            The installer failed to initialize. Please contact support.", BuildPatchInstallError")
        atexit(sub_142cec570)
        _Init_thread_footer(&data_143efada8)

if (data_143efadc8 s> *rdi_1)
    _Init_thread_header(&data_143efadc8)
    
    if (data_143efadc8 == 0xffffffff)
        _vfprintf_p_l(&data_143efadb0, 
            Maximum path length exceeded. Please specify a shorter install location.", 
            BuildPatchInstallError")
        atexit(sub_142cec750)
        _Init_thread_footer(&data_143efadc8)

if (data_143efade8 s> *rdi_1)
    _Init_thread_header(&data_143efade8)
    
    if (data_143efade8 == 0xffffffff)
        _vfprintf_p_l(&data_143efadd0, 
            Not enough disk space available. Please free up some disk space and try again.", 
            BuildPatchInstallError")
        atexit(sub_142cec700)
        _Init_thread_footer(&data_143efade8)

if (data_143efae08 s> *rdi_1)
    _Init_thread_header(&data_143efae08)
    
    if (data_143efae08 == 0xffffffff)
        _vfprintf_p_l(&data_143efadf0, An unknown error ocurred. Please contact support.", 
            BuildPatchInstallError")
        atexit(sub_142cec5c0)
        _Init_thread_footer(&data_143efae08)

int32_t rax_53

if (rsi.d u> 0xb)
    *arg1 = data_143efadf0
    int64_t rax_51 = data_143efadf8
    arg1[1] = rax_51
    
    if (rax_51 != 0)
        void* rax_52 = data_143efadf8
        *(rax_52 + 8) += 1
    
    rax_53 = data_143efae00
else
    switch (rsi)
        case 0
            *arg1 = data_143efac70
            int64_t rax_15 = data_143efac78
            arg1[1] = rax_15
            
            if (rax_15 != 0)
                void* rax_16 = data_143efac78
                *(rax_16 + 8) += 1
            
            rax_53 = data_143efac80
        case 1
            *arg1 = data_143efac90
            int64_t rax_18 = data_143efac98
            arg1[1] = rax_18
            
            if (rax_18 != 0)
                void* rax_19 = data_143efac98
                *(rax_19 + 8) += 1
            
            rax_53 = data_143efaca0
        case 2
            *arg1 = data_143efacb0
            int64_t rax_21 = data_143efacb8
            arg1[1] = rax_21
            
            if (rax_21 != 0)
                void* rax_22 = data_143efacb8
                *(rax_22 + 8) += 1
            
            rax_53 = data_143efacc0
        case 3
            *arg1 = data_143efacd0
            int64_t rax_24 = data_143efacd8
            arg1[1] = rax_24
            
            if (rax_24 != 0)
                void* rax_25 = data_143efacd8
                *(rax_25 + 8) += 1
            
            rax_53 = data_143eface0
        case 4
            *arg1 = data_143efacf0
            int64_t rax_27 = data_143efacf8
            arg1[1] = rax_27
            
            if (rax_27 != 0)
                void* rax_28 = data_143efacf8
                *(rax_28 + 8) += 1
            
            rax_53 = data_143efad00
        case 5
            *arg1 = data_143efad10
            int64_t rax_30 = data_143efad18
            arg1[1] = rax_30
            
            if (rax_30 != 0)
                void* rax_31 = data_143efad18
                *(rax_31 + 8) += 1
            
            rax_53 = data_143efad20
        case 6
            *arg1 = data_143efad30
            int64_t rax_33 = data_143efad38
            arg1[1] = rax_33
            
            if (rax_33 != 0)
                void* rax_34 = data_143efad38
                *(rax_34 + 8) += 1
            
            rax_53 = data_143efad40
        case 7
            *arg1 = data_143efad50
            int64_t rax_36 = data_143efad58
            arg1[1] = rax_36
            
            if (rax_36 != 0)
                void* rax_37 = data_143efad58
                *(rax_37 + 8) += 1
            
            rax_53 = data_143efad60
        case 8
            *arg1 = data_143efad70
            int64_t rax_39 = data_143efad78
            arg1[1] = rax_39
            
            if (rax_39 != 0)
                void* rax_40 = data_143efad78
                *(rax_40 + 8) += 1
            
            rax_53 = data_143efad80
        case 9
            *arg1 = data_143efad90
            int64_t rax_42 = data_143efad98
            arg1[1] = rax_42
            
            if (rax_42 != 0)
                void* rax_43 = data_143efad98
                *(rax_43 + 8) += 1
            
            rax_53 = data_143efada0
        case 0xa
            *arg1 = data_143efadb0
            int64_t rax_45 = data_143efadb8
            arg1[1] = rax_45
            
            if (rax_45 != 0)
                void* rax_46 = data_143efadb8
                *(rax_46 + 8) += 1
            
            rax_53 = data_143efadc0
        case 0xb
            *arg1 = data_143efadd0
            int64_t rax_48 = data_143efadd8
            arg1[1] = rax_48
            
            if (rax_48 != 0)
                void* rax_49 = data_143efadd8
                *(rax_49 + 8) += 1
            
            rax_53 = data_143efade0

arg1[2].d = rax_53
return arg1
