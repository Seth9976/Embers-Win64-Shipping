// 函数: ?CbStrToSz@@YAIPEBEAEAV?$TBuffer@D$0EAA@$0BAAAA@@pdb_internal@@AEA_N@Z
// 地址: 0x142c55db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

enum WIN32_ERROR dwErrCode = GetLastError()
int32_t rbp = *_errno()
char const* const _Source

if (arg1 s> 0x2af9)
    if (arg1 != 0x2afa)
        if (arg1 == 0x2afb)
            _Source = "Unrecoverable error in call to nameserver"
            goto label_142c5606f
        
        if (arg1 == 0x2afc)
            _Source = "No data record of requested type"
            goto label_142c5606f
        
        return nullptr
    
    _Source = "Host not found, try again"
label_142c5606f:
    strncpy(arg2, _Source, arg3)
    arg2[arg3 - 1] = 0
    
    if (*_errno() != rbp)
        *_errno() = rbp
    
    if (dwErrCode != GetLastError())
        SetLastError(dwErrCode)
    
    return arg2

if (arg1 == 0x2af9)
    _Source = "Host not found"
    goto label_142c5606f

if (arg1 - 0x2714 u> 0x61)
    return nullptr

switch (arg1)
    case 0x2714
        _Source = "Call interrupted"
        goto label_142c5606f
    case 0x2715, 0x2716, 0x2717, 0x2718, 0x271a, 0x271b, 0x271c, 0x271f, 0x2720, 0x2721, 0x2722, 
            0x2723, 0x2724, 0x2725, 0x2727, 0x2729, 0x272a, 0x272b, 0x272c, 0x272d, 0x272e, 0x272f, 
            0x2730, 0x2731, 0x2732, 0x2758, 0x2759, 0x275a, 0x275b, 0x275c, 0x275d, 0x275e, 0x275f, 
            0x2760, 0x2761, 0x2762, 0x2763, 0x2764, 0x2765, 0x2766, 0x2767, 0x2768, 0x2769, 0x276a, 
            0x276e, 0x276f, 0x2770, 0x2771, 0x2772, 0x2773, 0x2774
        return nullptr
    case 0x2719
        _Source = "Bad file"
        goto label_142c5606f
    case 0x271d
        _Source = "Bad access"
        goto label_142c5606f
    case 0x271e
        _Source = "Bad argument"
        goto label_142c5606f
    case 0x2726
        _Source = "Invalid arguments"
        goto label_142c5606f
    case 0x2728
        _Source = "Out of file descriptors"
        goto label_142c5606f
    case 0x2733
        _Source = "Call would block"
        goto label_142c5606f
    case 0x2734, 0x2735
        _Source = "Blocking call in progress"
        goto label_142c5606f
    case 0x2736
        _Source = "Descriptor is not a socket"
        goto label_142c5606f
    case 0x2737
        _Source = "Need destination address"
        goto label_142c5606f
    case 0x2738
        _Source = "Bad message size"
        goto label_142c5606f
    case 0x2739
        _Source = "Bad protocol"
        goto label_142c5606f
    case 0x273a
        _Source = "Protocol option is unsupported"
        goto label_142c5606f
    case 0x273b
        _Source = "Protocol is unsupported"
        goto label_142c5606f
    case 0x273c
        _Source = "Socket is unsupported"
        goto label_142c5606f
    case 0x273d
        _Source = "Operation not supported"
        goto label_142c5606f
    case 0x273e
        _Source = "Protocol family not supported"
        goto label_142c5606f
    case 0x273f
        _Source = "Address family not supported"
        goto label_142c5606f
    case 0x2740
        _Source = "Address already in use"
        goto label_142c5606f
    case 0x2741
        _Source = "Address not available"
        goto label_142c5606f
    case 0x2742
        _Source = "Network down"
        goto label_142c5606f
    case 0x2743
        _Source = "Network unreachable"
        goto label_142c5606f
    case 0x2744
        _Source = "Network has been reset"
        goto label_142c5606f
    case 0x2745
        _Source = "Connection was aborted"
        goto label_142c5606f
    case 0x2746
        _Source = "Connection was reset"
        goto label_142c5606f
    case 0x2747
        _Source = "No buffer space"
        goto label_142c5606f
    case 0x2748
        _Source = "Socket is already connected"
        goto label_142c5606f
    case 0x2749
        _Source = "Socket is not connected"
        goto label_142c5606f
    case 0x274a
        _Source = "Socket has been shut down"
        goto label_142c5606f
    case 0x274b
        _Source = "Too many references"
        goto label_142c5606f
    case 0x274c
        _Source = "Timed out"
        goto label_142c5606f
    case 0x274d
        _Source = "Connection refused"
        goto label_142c5606f
    case 0x274e
        _Source = "Loop??"
        goto label_142c5606f
    case 0x274f
        _Source = "Name too long"
        goto label_142c5606f
    case 0x2750
        _Source = "Host down"
        goto label_142c5606f
    case 0x2751
        _Source = "Host unreachable"
        goto label_142c5606f
    case 0x2752
        _Source = "Not empty"
        goto label_142c5606f
    case 0x2753
        _Source = "Process limit reached"
        goto label_142c5606f
    case 0x2754
        _Source = "Too many users"
        goto label_142c5606f
    case 0x2755
        _Source = "Bad quota"
        goto label_142c5606f
    case 0x2756
        _Source = "Something is stale"
        goto label_142c5606f
    case 0x2757
        _Source = "Remote error"
        goto label_142c5606f
    case 0x276b
        _Source = "Winsock library is not ready"
        goto label_142c5606f
    case 0x276c
        _Source = "Winsock version not supported"
        goto label_142c5606f
    case 0x276d
        _Source = "Winsock library not initialised"
        goto label_142c5606f
    case 0x2775
        _Source = "Disconnected"
        goto label_142c5606f
